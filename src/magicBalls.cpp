#include "magicBalls.h"

MagicBalls::MagicBalls(QString nameFile) : QGraphicsPixmapItem(QPixmap(nameFile)){
    this->speedX = 0;
    this->speedY = 3;
}

MagicBalls::MagicBalls(int speedX, int speedY, QString nameFile) : QGraphicsPixmapItem(QPixmap(nameFile)){
    this->speedX = speedX;
    this->speedY = speedY;
}

MagicBalls::~MagicBalls() {
}

void MagicBalls::setSpeedX(int speedX) {
    this->speedX = speedX;
}

void MagicBalls::setSpeedY(int speedY) {
    this->speedY = speedY;
}

int MagicBalls::getSpeedX() {
    return this->speedX;
}

int MagicBalls::getSpeedY() {
    return this->speedY;
}

void MagicBalls::move() {
    this->setPos(this->pos().x()+speedX, this->pos().y()+speedY);
}