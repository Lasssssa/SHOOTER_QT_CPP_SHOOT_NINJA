#include "MyScene.h"

MyScene::MyScene(MainWindow* mainWdow, QObject* parent) : QGraphicsScene(parent) {

    this->mainWindow = mainWdow;

    //Ajoute un fond d'écran
    this->background.load("img/map.png");
    this->setSceneRect(0, 0, background.width(), background.height());

    //Ajoute le timer principal
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(30);

    //Ajout du timer Ennemi
    spawnEnnemies = new QTimer(this);
    connect(spawnEnnemies, SIGNAL(timeout()), this, SLOT(spawnEnnemy()));
    spawnEnnemies->start(2000);

    //Set du point central de la vue
    this->position = QPointF(this->width()/2,1920);

    //Création du personnage principal
    perso = new Heroes(this,10,5,"img/main_perso.png");
    perso->setPos(this->width()/2, 1920);
    this->addItem(perso);

    //Création de la barre de vie
    healthBar = new HealthBar("img/vie_10.png", this->width()/2, 1920);
    healthBar->setPos(this->width()-this->healthBar->boundingRect().width()-20, 2270-this->healthBar->boundingRect().height()-20);
    this->addItem(healthBar);

    //Ajout du texte pour le score :
    scoreText = new QGraphicsTextItem();
    scoreText->setPlainText("Score : " + QString::number(perso->getScore()));
    scoreText->setDefaultTextColor(Qt::white);
    scoreText->setFont(QFont("times",16));
    scoreText->setPos(20, 1600+scoreText->boundingRect().height());
    this->addItem(scoreText);

    //Création du timer pour les tirs du personnage principal
    shootInterval = new QElapsedTimer();
    shootInterval->start();

    ultiInterval = new QElapsedTimer();
    ultiInterval->start();

    invisibilityInterval = new QElapsedTimer();
    invisibilityInterval->start();

    //Création du timer pour les tirs des ennemis
    shootTimer = new QTimer(this);
    connect(shootTimer, SIGNAL(timeout()), this, SLOT(shootOfEnnemies()));
    shootTimer->start(1500);


    countEnnemies = 0;
    countShooter = 0;

    //Ajout du texte pour le score des ennemis :
    scoreEnnemies = new QGraphicsTextItem();
    scoreEnnemies->setPlainText(QString::number(countEnnemies));
    scoreEnnemies->setDefaultTextColor(Qt::white);
    scoreEnnemies->setFont(QFont("times",16));
    scoreEnnemies->setPos(75, 1700);

    //Ajout du texte pour le score des ennemis :
    scoreShooter = new QGraphicsTextItem();
    scoreShooter->setPlainText(QString::number(countShooter));
    scoreShooter->setDefaultTextColor(Qt::white);
    scoreShooter->setFont(QFont("times",16));
    scoreShooter->setPos(75, 1775);

    //Ajout de l'image des ennemis :
    ennemiesImage = new QGraphicsPixmapItem();
    ennemiesImage->setPixmap(QPixmap("img/emmeniCount.png"));
    ennemiesImage->setPos(20, 1700);

    //Ajout de l'image des ennemis :
    shooterImage = new QGraphicsPixmapItem();
    shooterImage->setPixmap(QPixmap("img/shooterCount.png"));
    shooterImage->setPos(20, 1775);

    ultimText = new QGraphicsTextItem();
    QString time = QString::number(25 - (ultiInterval->elapsed()/1000));
    ultimText->setPlainText("Ultim : " + time);
    ultimText->setDefaultTextColor(Qt::white);
    ultimText->setFont(QFont("times",16));
    ultimText->setPos(this->width()-175, 1600);
    this->addItem(ultimText);

    invisibilityText = new QGraphicsTextItem();
    QString time2 = QString::number(15 - (ultiInterval->elapsed()/1000));
    invisibilityText->setPlainText("Invisibility : " + time2);
    invisibilityText->setDefaultTextColor(Qt::white);
    invisibilityText->setFont(QFont("times",16));
    invisibilityText->setPos(this->width()-215, 1650);
    this->addItem(invisibilityText);


    this->addItem(scoreEnnemies);
    this->addItem(scoreShooter);
    this->addItem(ennemiesImage);
    this->addItem(shooterImage);

}

void MyScene::stopGame() {
    this->timer->stop();
    this->spawnEnnemies->stop();
    this->shootTimer->stop();
}

void MyScene::startGame(){

    //Reinitialise les timer et les relance
    this->timer->start(30);
    this->spawnEnnemies->start(2000);
    this->shootTimer->start(1500);

    //Reinitialise tout à 0
    this->perso->setScore(0);
    this->perso->setLife(10);

    this->healthBar->updateLife("img/vie_10.png");

    //Reinitialise la position du personnage
    this->perso->setPos(this->width()/2, 1920);
    this->position.setY(1920);
    this->position.setX(this->width()/2);

    //Reinitialise les ennemis
    //this->clearAll();


}

void MyScene::clearAll(){
    for (Ennemies* ennemi : this->ennemies){
        this->getHeroes()->setScore(this->getHeroes()->getScore()+20);
        this->countEnnemies++;
        this->removeItem(ennemi);
        this->ennemies.removeOne(ennemi);
    }
    for (EnnemiesShooter* ennemi : this->ennemiesShooter){
        for (MagicBalls* magicBall : ennemi->magicBalls){
            this->removeItem(magicBall);
            ennemi->magicBalls.removeOne(magicBall);
        }
        this->getHeroes()->setScore(this->getHeroes()->getScore()+20);
        this->countShooter++;
        this->removeItem(ennemi);
        this->ennemiesShooter.removeOne(ennemi);
    }
    for(Shuriken* shuriken : this->perso->shurikens){
        this->removeItem(shuriken);
        this->perso->shurikens.removeOne(shuriken);
    }
}

void MyScene::reStartGame(){
    this->timer->start(30);
    this->spawnEnnemies->start(2000);
    this->shootTimer->start(1500);

    this->perso->setScore(0);
    this->perso->setLife(10);

    this->perso->setPos(this->width()/2, 1920);
    this->position.setY(1920);
    this->position.setX(this->width()/2);

    this->healthBar->updateLife("img/vie_10.png");

    this->clearAll();
}

MyScene::~MyScene() {
    for(Ennemies* ennemi : this->ennemies){
        this->removeItem(ennemi);
        this->ennemies.removeOne(ennemi);
    }
    for(EnnemiesShooter* ennemi : this->ennemiesShooter){
        this->removeItem(ennemi);
        this->ennemiesShooter.removeOne(ennemi);
    }
    this->removeItem(perso);
    perso->~Heroes();
    delete timer;
    delete spawnEnnemies;
    delete shootInterval;
    delete shootTimer;
    delete healthBar;
}
void MyScene::drawBackground(QPainter *painter, const QRectF &rect) {
    Q_UNUSED(rect);
    painter->drawPixmap(QRectF(0,0,background.width(), background.height()), background, sceneRect());
}

void MyScene::update() {

    scoreShooter->setPlainText(QString::number(countShooter));
    scoreEnnemies->setPlainText(QString::number(countEnnemies));
    this->perso->setScore(this->perso->getScore()+1);
    //Update du score
    this->scoreText->setPlainText("Score : " + QString::number(perso->getScore()));
    //Fait avancer le personnage
    int speedGame = 2;
    int newY = this->position.y() - speedGame;
    if(newY > 1920)
    {
        scoreShooter->setPos(scoreShooter->pos().x(),scoreShooter->pos().y()-speedGame);
        scoreEnnemies->setPos(scoreEnnemies->pos().x(),scoreEnnemies->pos().y()-speedGame);
        ennemiesImage->setPos(ennemiesImage->pos().x(),ennemiesImage->pos().y()-speedGame);
        shooterImage->setPos(shooterImage->pos().x(),shooterImage->pos().y()-speedGame);
        scoreText->setPos(scoreText->pos().x(),scoreText->pos().y()-speedGame);
        ultimText->setPos(ultimText->pos().x(),ultimText->pos().y()-speedGame);
        invisibilityText->setPos(invisibilityText->pos().x(),invisibilityText->pos().y()-speedGame);
        this->healthBar->moveHealthBar();
        this->position.setY(newY);
        perso->moveUp(speedGame);
        for (Ennemies* ennemi : this->ennemies) {
            ennemi->move();
        }
        //Fait avancer les shurikens
        for (Shuriken* shuriken : this->perso->shurikens) {
            shuriken->move();
        }
        //Fait avancer les shoter
        for (EnnemiesShooter* ennemi : this->ennemiesShooter){
            ennemi->move();
            for(MagicBalls* magicBall : ennemi->magicBalls){
                magicBall->move();
            }
        }
    }else{
        newY += 3840;
        this->position.setY(newY);
        scoreShooter->setPos(scoreShooter->pos().x(),scoreShooter->pos().y()-speedGame+3840);
        scoreEnnemies->setPos(scoreEnnemies->pos().x(),scoreEnnemies->pos().y()-speedGame+3840);
        ennemiesImage->setPos(ennemiesImage->pos().x(),ennemiesImage->pos().y()-speedGame+3840);
        shooterImage->setPos(shooterImage->pos().x(),shooterImage->pos().y()-speedGame+3840);
        scoreText->setPos(scoreText->pos().x(),scoreText->pos().y()-speedGame+3840);
        ultimText->setPos(ultimText->pos().x(),ultimText->pos().y()-speedGame+3840);
        invisibilityText->setPos(invisibilityText->pos().x(),invisibilityText->pos().y()-speedGame+3840);
        int Y = perso->pos().y() - speedGame +3840;
        perso->setPos(perso->pos().x(),Y);
        for (Ennemies* ennemi : this->ennemies) {
            ennemi->setPos(ennemi->pos().x(),ennemi->pos().y()+3840);
        }
        //Fait avancer les shurikens
        for (Shuriken* shuriken : this->perso->shurikens) {
            shuriken->setPos(shuriken->pos().x(),shuriken->pos().y()+3840);
        }
        //Fait avancer les shoter
        for (EnnemiesShooter* ennemi : this->ennemiesShooter){
            ennemi->setPos(ennemi->pos().x(),ennemi->pos().y()+3840);
            for(MagicBalls* magicBall : ennemi->magicBalls){
                magicBall->setPos(magicBall->pos().x(),magicBall->pos().y()+3840);
            }
        }
        //Fait avancer les magics balls des shooter ennemies
        this->healthBar->setPos(this->healthBar->pos().x(),this->healthBar->pos().y()+3840);

    }

    QString timeUlti = QString::number(25 - ultiInterval->elapsed()/1000);
    if(ultiInterval->elapsed() > 25000){
        timeUlti = "Ready";
    }

    QString timeInvisibility = QString::number(15 - invisibilityInterval->elapsed()/1000);
    if(invisibilityInterval->elapsed() > 15000){
        timeInvisibility = "Ready";
    }
    this->invisibilityText->setPlainText("Invisibility : " + timeInvisibility);

    this->ultimText->setPlainText("Ultim : " + timeUlti);

    this->views()[0]->centerOn(position);


    //Gère les touches pressées
    checkKeysPressed();


    //Gère les shurikens et ennemis sortis de la vue :
    clearShurikens();
    clearEnnemies();
    clearEnnemiesShooter();

    //Gère les collisions
    checkCollisions();

    checkLife();

}

void MyScene::shootOfEnnemies(){
    for(EnnemiesShooter* ennemi : this->ennemiesShooter){
        ennemi->shoot();
    }
}

void MyScene::checkCollisions() {
    //Gère les collisions entre les shurikens et les ennemis normaux
    for (Shuriken* shuriken : this->perso->shurikens) {
        for (Ennemies* ennemi : this->ennemies) {
            if(ennemi != nullptr && shuriken != nullptr){
                if (shuriken->collidesWithItem(ennemi)) {
                    this->perso->shurikens.removeOne(shuriken);
                    this->removeItem(shuriken);
                    ennemi->setLife(ennemi->getLife() - 1);
                }
                if (ennemi->getLife() <= 0) {
                    this->ennemies.removeOne(ennemi);
                    this->removeItem(ennemi);
                    //Ajout de leur cadavre :
                    QGraphicsPixmapItem* cadavre = new QGraphicsPixmapItem(QPixmap("img/ennemi_dead.png"));
                    cadavre->setPos(ennemi->pos());
                    this->addItem(cadavre);
                    //Suppression du cadavre au bout de 2 secondes
                    QTimer::singleShot(2000, this, [=](){
                        this->removeItem(cadavre);
                        cadavre->~QGraphicsPixmapItem();
                    });
                    countEnnemies++;
                    perso->setScore(perso->getScore()+25);
                }
            }
        }
    }

    //Gère les collisions entre les shurikens et les ennemis shooter
    for (Shuriken* shuriken : this->perso->shurikens) {
        for (EnnemiesShooter* ennemi : this->ennemiesShooter) {
            if(ennemi != nullptr && shuriken != nullptr){
                if (shuriken->collidesWithItem(ennemi)) {
                    this->removeItem(shuriken);
                    this->perso->shurikens.removeOne(shuriken);
                    ennemi->setLife(ennemi->getLife() - 1);
                }
                if(ennemi->getLife() <= 0) {
                    this->ennemiesShooter.removeOne(ennemi);
                    this->removeItem(ennemi);
                    for(MagicBalls* magicBall : ennemi->magicBalls){
                        this->removeItem(magicBall);
                        ennemi->magicBalls.removeOne(magicBall);
                    }
                    //Ajout de leur cadavre :
                    QGraphicsPixmapItem* cadavre = new QGraphicsPixmapItem(QPixmap("img/ennemi_dead.png"));
                    cadavre->setPos(ennemi->pos());
                    this->addItem(cadavre);
                    //Suppression du cadavre au bout de 2 secondes
                    QTimer::singleShot(2000, this, [=](){
                        this->removeItem(cadavre);
                        cadavre->~QGraphicsPixmapItem();
                    });
                    countShooter++;
                    perso->setScore(perso->getScore()+25);
                }
            }
        }
    }

    //Gère les collisions entre le personnage et les ennemis
    for (Ennemies* ennemi : this->ennemies) {
        if(perso->collidesWithItem(ennemi) && perso->invisible == false){
            this->ennemies.removeOne(ennemi);
            this->removeItem(ennemi);
            //Ajout de leur cadavre :
            QGraphicsPixmapItem* cadavre = new QGraphicsPixmapItem(QPixmap("img/ennemi_dead.png"));
            cadavre->setPos(ennemi->pos());
            this->addItem(cadavre);
            //Suppression du cadavre au bout de 2 secondes
            QTimer::singleShot(2000, this, [=](){
                this->removeItem(cadavre);
                cadavre->~QGraphicsPixmapItem();
            });
            countEnnemies++;
            perso->setScore(perso->getScore()+25);
            perso->setLife(perso->getLife()-1);
            this->healthBar->updateLife("img/vie_"+QString::number(perso->getLife())+".png");
        }
    }

    //Gère les collisions entre le personnage et les ennemis shooter
    for (EnnemiesShooter* ennemi : this->ennemiesShooter) {
        if(perso->collidesWithItem(ennemi) && perso->invisible == false){
            this->ennemiesShooter.removeOne(ennemi);
            for(MagicBalls* magicBall : ennemi->magicBalls){
                this->removeItem(magicBall);
                ennemi->magicBalls.removeOne(magicBall);
            }
            this->removeItem(ennemi);

            //Ajout de leur cadavre :
            QGraphicsPixmapItem* cadavre = new QGraphicsPixmapItem(QPixmap("img/ennemi_dead.png"));
            cadavre->setPos(ennemi->pos());
            this->addItem(cadavre);
            //Suppression du cadavre au bout de 2 secondes
            QTimer::singleShot(2000, this, [=](){
                this->removeItem(cadavre);
                cadavre->~QGraphicsPixmapItem();
            });
            countShooter++;
            perso->setScore(perso->getScore()+25);
            perso->setLife(perso->getLife()-1);
            this->healthBar->updateLife("img/vie_"+QString::number(perso->getLife())+".png");
        }
    }

    //Gère les collisions entre le personnage et les magic balls
    for (EnnemiesShooter* ennemi : this->ennemiesShooter) {
        for (MagicBalls* magicBall : ennemi->magicBalls) {
            if(perso->collidesWithItem(magicBall) && perso->invisible == false){
                this->removeItem(magicBall);
                ennemi->magicBalls.removeOne(magicBall);
                //Enleve une vie au personnage
                perso->setLife(perso->getLife()-1);
                this->healthBar->updateLife("img/vie_"+QString::number(perso->getLife())+".png");
            }
        }
    }
}

void MyScene::clearEnnemiesShooter() {
    for (EnnemiesShooter* ennemi : this->ennemiesShooter) {
        if (ennemi->pos().y() > this->position.y() + this->views()[0]->height()/2 || ennemi->pos().x() < 0 || ennemi->pos().x() > this->views()[0]->width()) {
            this->removeItem(ennemi);
            for(MagicBalls* magicBall : ennemi->magicBalls){
                this->removeItem(magicBall);
                ennemi->magicBalls.removeOne(magicBall);
            }
            this->ennemiesShooter.removeOne(ennemi);
        }
    }
}

void MyScene::clearEnnemies() {
    //Gère les ennemis sortis de la vue
    for (Ennemies* ennemi : this->ennemies) {
        if(ennemi->pos().y() > this->position.y() + this->views()[0]->height()/2 || ennemi->pos().x() < 0 || ennemi->pos().x() > this->views()[0]->width()){
            this->removeItem(ennemi);
            this->ennemies.removeOne(ennemi);
        }
    }
}
void MyScene::clearShurikens() {
    //Gère les shurikens sortis de la vue
    for (Shuriken* shuriken : this->perso->shurikens) {
        if(shuriken->pos().y() < this->position.y() - this->views()[0]->height()/2) {
            this->removeItem(shuriken);
            this->perso->shurikens.removeOne(shuriken);
        }
    }
}

void MyScene::checkKeysPressed() {
    for (int key : this->keysPressed) {
        switch (key) {
            case Qt::Key_Q:
                if(perso->pos().x()-position.x()+(this->views()[0]->width()/2) > 0){
                    perso->changeImage("img/main_perso_left.png");
                    perso->moveLeft(perso->getSpeed());
                }
                break;
            case Qt::Key_D:
                if(perso->pos().x()+perso->boundingRect().width() < this->views()[0]->width()){
                    perso->changeImage("img/main_perso_right.png");
                    perso->moveRight(perso->getSpeed());
                }
                break;
            case Qt::Key_Z:
                if(perso->pos().y()-position.y()+this->views()[0]->height()/2 > 0){
                    perso->changeImage("img/main_perso.png");
                    perso->moveUp(perso->getSpeed());
                }
                break;
            case Qt::Key_S:
                if(perso->pos().y()-position.y()-this->views()[0]->height()/2 < - perso->boundingRect().height()){
                    perso->changeImage("img/main_perso_back.png");
                    perso->moveDown(perso->getSpeed());
                }
                break;
            case Qt::Key_Space:
                if(shootInterval->elapsed() > 250) {
                    shootInterval->restart();
                    perso->shoot();
                }
                break;
            case Qt::Key_E:
                if(ultiInterval->elapsed() > 25000) {
                    ultiInterval->restart();
                    this->spawnUltim();
                    perso->shootSpecial();
                }
                break;
            case Qt::Key_R:
                if(invisibilityInterval->elapsed() > 15000) {
                    this->getHeroes()->invisible = true;
                    this->getHeroes()->setOpacity(0.5);
                    QTimer::singleShot(4000, this, [=](){
                        this->getHeroes()->invisible = false;
                        this->getHeroes()->setOpacity(1);
                    });
                }
                invisibilityInterval->restart();
                this->keysPressed.removeOne(key);
                break;
        }
    }
}

void MyScene::spawnUltim() {
    QGraphicsPixmapItem* ultim = new QGraphicsPixmapItem(QPixmap("img/ulti_1.png"));
    //Se place au milieu de position
    ultim->setPos(this->position.x() + - ultim->boundingRect().width()/2, this->position.y() - ultim->boundingRect().height()/2);
    this->addItem(ultim);

    QTimer::singleShot(100, [=]() {
        ultim->setPixmap(QPixmap("img/ulti_2.png"));
        ultim->setPos(this->position.x() + - ultim->boundingRect().width()/2, this->position.y() - ultim->boundingRect().height()/2);
        QTimer::singleShot(100, [=]() {
            ultim->setPixmap(QPixmap("img/ulti_3.png"));
            ultim->setPos(this->position.x() + - ultim->boundingRect().width()/2, this->position.y() - ultim->boundingRect().height()/2);
            QTimer::singleShot(100, [=]() {
                ultim->setPixmap(QPixmap("img/ulti_4.png"));
                ultim->setPos(this->position.x() + - ultim->boundingRect().width()/2, this->position.y() - ultim->boundingRect().height()/2);
                QTimer::singleShot(100, [=]() {
                    this->removeItem(ultim);
                });
            });
        });
    });
}


void MyScene::spawnEnnemy() {
    if(this->getHeroes()->getScore() > step){
        step += 500;
        difficulty += 1;
    }
    int randomSpawnEnnemy = QRandomGenerator::global()->bounded(0,difficulty);
    for(int k=0;k<=randomSpawnEnnemy ;k++){
        createEnnemy();
    }
    int randomSpawnShooterEnnemy = QRandomGenerator::global()->bounded(0,difficulty/2);
    for(int k=0;k<=randomSpawnShooterEnnemy ;k++){
        createShooterEnnemy();
    }
}

void MyScene::createShooterEnnemy(){
    int i = QRandomGenerator::global()->bounded(1,4);
    QString path = "img/ennemy_"+QString::number(i)+".png";
    path = "img/shooter.png";
    EnnemiesShooter* ennemi = new EnnemiesShooter(this,3,path);
    int sizeEnnemy = ennemi->boundingRect().height();
    int SizeX = this->views()[0]->width();
    int X =  QRandomGenerator::global()->bounded(0+sizeEnnemy, SizeX-sizeEnnemy);
    int Y = perso->pos().y() - 600;
    ennemi->setPos(X,Y);
    this->ennemiesShooter.push_back(ennemi);
    this->addItem(ennemi);
}

void MyScene::createEnnemy(){
    int i = QRandomGenerator::global()->bounded(1,4);
    QString path = "img/ennemy_"+QString::number(i)+".png";
    path = "img/squelette.png";
    Ennemies* ennemi = new Ennemies(3,path);
    int sizeEnnemy = ennemi->boundingRect().height();
    int SizeX = this->views()[0]->width();
    int X =  QRandomGenerator::global()->bounded(0+sizeEnnemy, SizeX-sizeEnnemy);
    int Y = perso->pos().y() - 600;
    ennemi->setPos(X,Y);
    this->ennemies.push_back(ennemi);
    this->addItem(ennemi);
}

void MyScene::keyPressEvent(QKeyEvent* event){
    //Ajoute la key dans la liste des keys pressées
    this->keysPressed.push_back(event->key());
}

void MyScene::keyReleaseEvent(QKeyEvent* event){
    this->keysPressed.removeOne(event->key());
}