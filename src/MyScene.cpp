#include "MyScene.h"

MyScene::MyScene(QObject* parent) : QGraphicsScene(parent) {

    QGraphicsRectItem* qgri = new QGraphicsRectItem(10, 100, 300, 200);
    this->addItem(qgri);

    QGraphicsTextItem* qgti = new QGraphicsTextItem("CIR2 Rennes");
    this->addItem(qgti);

    perso = new QGraphicsPixmapItem(QPixmap("img/personnage.png"));
    perso->setScale(0.5);
    this->addItem(perso);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(30);


}

MyScene::~MyScene() {

}

void MyScene::update() {
    //qDebug() << "update";
    //qDebug() << perso->pos().x();
    //qDebug() << perso->pos().y();
    perso->setPos(perso->pos().x() + 1, perso->pos().y() + 1);

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