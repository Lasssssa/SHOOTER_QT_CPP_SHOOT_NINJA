#include "shooter.h"

EnnemiesShooter::EnnemiesShooter(MyScene* scene, QString nameFile) : Ennemies(nameFile) {
    this->magicBalls = QVector<MagicBalls*>();
    this->scene = scene;
}

EnnemiesShooter::EnnemiesShooter(MyScene* scene, int life, QString nameFile) : Ennemies(life, nameFile) {
    this->magicBalls = QVector<MagicBalls*>();
    this->scene = scene;
}

EnnemiesShooter::~EnnemiesShooter() {
    for (int i = 0; i < this->magicBalls.size(); i++) {
        this->scene->removeItem(this->magicBalls[i]);
        this->magicBalls.remove(i);
    }
}


void EnnemiesShooter::shoot() {
    MagicBalls* magicBall = new MagicBalls("img/magicBall.png");
    magicBall->setPos(this->pos().x(), this->pos().y());
    this->magicBalls.push_back(magicBall);
    this->scene->addItem(magicBall);
}