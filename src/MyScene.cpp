#include "MyScene.h"

MyScene::MyScene(QObject* parent) : QGraphicsScene(parent) {

    //Ajoute un fond d'écran
    this->background.load("img/fond.jpg");
    this->setSceneRect(0, 0, background.width(), background.height());

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(30);

    perso = new Heroes("img/personnage.png");
    perso->setPos(0, 0);
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
    if(perso->pos().x() < 0 || perso->pos().x() > background.width() || perso->pos().y() < 0 || perso->pos().y() > background.height()) {
        perso->setPos(0, 0);
    }
    else{
        perso->setPos(perso->pos().x() + 1, perso->pos().y() + 1);
    }

}

void MyScene::keyPressEvent(QKeyEvent* event){
    if(event->key() == Qt::Key_P) { // appui sur la touche P du clavier
        qDebug() << "P";
    }
}
void MyScene::keyReleaseEvent(QKeyEvent* event){
    if(event->key() == Qt::Key_P) { // relachement de la touche P du clavier
        qDebug() << "P laché";
    }
}