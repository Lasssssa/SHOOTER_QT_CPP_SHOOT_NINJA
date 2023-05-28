#include "MyScene.h"

MyScene::MyScene(QObject* parent) : QGraphicsScene(parent) {

    //Ajoute un fond d'écran
    this->background.load("img/fond2.jpg");
    this->setSceneRect(0, 0, background.width(), background.height());

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(30);

    perso = new Heroes("img/personnage.png");
    //Setpos tout en bas à droite
    this->center = QPointF(this->width()/2, this->height()/1.5);
    perso->setPos(this->width()/2, this->height()/1.5);
    this->addItem(perso);
}

MyScene::~MyScene() {

}
void MyScene::drawBackground(QPainter *painter, const QRectF &rect) {
    Q_UNUSED(rect);
    painter->drawPixmap(QRectF(0,0,background.width(), background.height()), background, sceneRect());
}

void MyScene::update() {
    //qDebug() << "update";
    //qDebug() << perso->pos().x();
    //qDebug() << perso->pos().y();

    /*
    if(perso->pos().x() < 0 -perso->pixmap().width()  || perso->pos().y() < 0-perso->pixmap().height() || perso->pos().x() > this->width() - perso->pixmap().width() || perso->pos().y() > this->height() - perso->pixmap().height()){
        perso->setPos(this->width()/2, this->height()-100);
    }
    else{
        perso->setPos(perso->pos().x() , perso->pos().y() -1);
    }


    int y = center->y();
    if(y < 100){
        y= this->height()/1.5;
    }else{
        y-=100;
    }
     */
    int newY = center.y() - 3;
    int newYPerso = perso->y() - 3;
    if (newY < 400) {
        newY = newY+700;
        newYPerso = newYPerso+700;
    }
    this->center.setY(newY);
    this->views()[0]->centerOn(this->center);
    this->perso->setY(newYPerso);
    //Recentre la vue sur le personnage

    //Fait défiler le fond
    //this->setBackgroundBrush(QBrush(background.scaled(this->width(), this->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));
    //this->views().at(0)->centerOn(perso);
    //this->views()[0]->centerOn(this->center);

}

void MyScene::keyPressEvent(QKeyEvent* event){
    if(event->key() == Qt::Key_Z) { // appui sur la touche Z du clavier
        perso->setPos(perso->pos().x() , perso->pos().y() - perso->getSpeed());
    }
    if(event->key() == Qt::Key_S) { // appui sur la touche S du clavier
        perso->setPos(perso->pos().x() , perso->pos().y() + perso->getSpeed());
    }
    if(event->key() == Qt::Key_Q) { // appui sur la touche Q du clavier
        perso->setPos(perso->pos().x() - perso->getSpeed() , perso->pos().y());
    }
    if(event->key() == Qt::Key_D) { // appui sur la touche D du clavier
        perso->setPos(perso->pos().x() + perso->getSpeed() , perso->pos().y());
    }

}

void MyScene::keyReleaseEvent(QKeyEvent* event){
    if(event->key() == Qt::Key_Z) { // appui sur la touche P du clavier
        perso->setPos(perso->pos().x() , perso->pos().y() - perso->getSpeed());
    }
    if(event->key() == Qt::Key_S) { // appui sur la touche P du clavier
        perso->setPos(perso->pos().x() , perso->pos().y() + perso->getSpeed());
    }
    if(event->key() == Qt::Key_Q) { // appui sur la touche P du clavier
        perso->setPos(perso->pos().x() - perso->getSpeed() , perso->pos().y());
    }
    if(event->key() == Qt::Key_D) { // appui sur la touche P du clavier
        perso->setPos(perso->pos().x() + perso->getSpeed() , perso->pos().y());
    }
}
