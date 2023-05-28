#include "ennemies.h"

Ennemies::Ennemies(QString nameFile) : QGraphicsPixmapItem(QPixmap(nameFile)) {
    this->life = 3;
    float speedX = QRandomGenerator::global()->bounded(-10,10);
    speedX /= 10;
    int speedY = QRandomGenerator::global()->bounded(0,3);
    if(speedX == 0){
        speedX = 0.5;
    }
    if(speedY == 0){
        speedY = 1;
    }
    this->speedX = speedX;
    this->speedY = speedY;
}
Ennemies::Ennemies(int life, QString nameFile) : QGraphicsPixmapItem(QPixmap(nameFile)) {
    this->life = life;
    float speedX = QRandomGenerator::global()->bounded(-10,10);
    speedX /= 10;
    int speedY = QRandomGenerator::global()->bounded(0,3);
    if(speedX == 0){
        speedX = 0.5;
    }
    if(speedY == 0){
        speedY = 1;
    }
    this->speedX = speedX;
    this->speedY = speedY;
}
Ennemies::~Ennemies() {

}

void Ennemies::setLife(int life) {
    this->life = life;
}
void Ennemies::setSpeedX(int speedX) {
    this->speedX = speedX;
}
int Ennemies::getLife() {
    return this->life;
}
float Ennemies::getSpeedX() {
    return this->speedX;
}
int Ennemies::getSpeedY() {
    return this->speedY;
}
void Ennemies::setSpeedY(int speedY) {
    this->speedY = speedY;
}
void Ennemies::move() {
    this->setPos(this->pos().x()+speedX, this->pos().y()+speedY);
}