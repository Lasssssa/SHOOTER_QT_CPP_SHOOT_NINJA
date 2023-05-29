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
    //scoreText->setDefaultTextColor(Qt::white);
    //scoreText->setFont(QFont("times",16));
    scoreText->setPos(20, 1600+scoreText->boundingRect().height());
    this->addItem(scoreText);

    //Création du timer pour les tirs du personnage principal
    shootInterval = new QElapsedTimer();
    shootInterval->start();

    //Création du timer pour les tirs des ennemis
    shootTimer = new QTimer(this);
    connect(shootTimer, SIGNAL(timeout()), this, SLOT(shootOfEnnemies()));
    shootTimer->start(1500);

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
        this->removeItem(ennemi);
        this->ennemies.removeOne(ennemi);
    }
    for (EnnemiesShooter* ennemi : this->ennemiesShooter){
        for (MagicBalls* magicBall : ennemi->magicBalls){
            this->removeItem(magicBall);
            ennemi->magicBalls.removeOne(magicBall);
        }
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

    //Test :

    this->perso->setScore(this->perso->getScore()+1);

    //Update du score
    this->scoreText->setPlainText("Score : " + QString::number(perso->getScore()));


    //Fait avancer le personnage
    int speedGame = 2;
    int newY = this->position.y() - speedGame;
    if(newY > 1920)
    {
        scoreText->setPos(scoreText->pos().x(),scoreText->pos().y()-speedGame);
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
        scoreText->setPos(scoreText->pos().x(),scoreText->pos().y()-speedGame+3840);
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
                }
            }
        }
    }

    //Gère les collisions entre le personnage et les ennemis
    for (Ennemies* ennemi : this->ennemies) {
        if(perso->collidesWithItem(ennemi)){
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
            perso->setLife(perso->getLife()-1);
            this->healthBar->updateLife("img/vie_"+QString::number(perso->getLife())+".png");
        }
    }

    //Gère les collisions entre le personnage et les ennemis shooter
    for (EnnemiesShooter* ennemi : this->ennemiesShooter) {
        if(perso->collidesWithItem(ennemi)){
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
            perso->setLife(perso->getLife()-1);
            this->healthBar->updateLife("img/vie_"+QString::number(perso->getLife())+".png");
        }
    }

    //Gère les collisions entre le personnage et les magic balls
    for (EnnemiesShooter* ennemi : this->ennemiesShooter) {
        for (MagicBalls* magicBall : ennemi->magicBalls) {
            if(perso->collidesWithItem(magicBall)){
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
            case Qt::Key_F:
                perso->beInvisible();
                break;

            }
    }
}

void MyScene::spawnEnnemy() {
    int randomSpawnEnnemy = QRandomGenerator::global()->bounded(0,4);
    for(int k=0;k<=randomSpawnEnnemy ;k++){
        createEnnemy();
    }
    int randomSpawnShooterEnnemy = QRandomGenerator::global()->bounded(0,2);
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
