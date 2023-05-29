#include "shuriken.h"

Shuriken::Shuriken(QString nameFile): QGraphicsPixmapItem(QPixmap(nameFile)) {
    this->speed = 7;
    this->damage = 1;
}

Shuriken::Shuriken(int speed, int damage, QString nameFile) : QGraphicsPixmapItem(QPixmap(nameFile)) {
    this->speed = speed;
    this->damage = damage;
}

Shuriken::~Shuriken() {
}

void Shuriken::setSpeed(int speed) {
    this->speed = speed;
}

void Shuriken::setDamage(int damage) {
    this->damage = damage;
}

int Shuriken::getSpeed() {
    return this->speed;
}

int Shuriken::getDamage() {
    return this->damage;
}

void Shuriken::move() {
    this->setPos(this->pos().x(), this->pos().y()-speed);
}