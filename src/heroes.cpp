
#include "heroes.h"

Heroes::Heroes(MyScene* scene, QString nameFile) : QGraphicsPixmapItem(QPixmap(nameFile)) {
    this->life = 100;
    this->speed = 1;
    this->invisible = false;
    this->scene = scene;
    this->magicPower = 0;
}

Heroes::Heroes(MyScene* scene, int life, int speed, QString nameFile) : QGraphicsPixmapItem(QPixmap(nameFile)) {
    this->life = life;
    this->speed = speed;
    this->invisible = false;
    this->scene = scene;
    this->magicPower = 0;
}

void Heroes::shootSpecial() {
    scene->clearAll();
    this->score += 750;
}

int Heroes::getScore() {
    return this->score;
}

void Heroes::setScore(int score) {
    this->score = score;
}
Heroes::~Heroes() {
    for (int i = 0; i < this->shurikens.size(); i++) {
        this->scene->removeItem(this->shurikens[i]);
        this->shurikens.remove(i);
    }
}

void Heroes::setLife(int life) {
    this->life = life;
}
void Heroes::setSpeed(int speed) {
    this->speed = speed;
}
int Heroes::getLife() {
    return this->life;
}
int Heroes::getSpeed() {
    return this->speed;
}

void Heroes::moveLeft(int speed) {
    this->setPos(this->pos().x() - speed, this->pos().y());
}
void Heroes::moveRight(int speed) {
    this->setPos(this->pos().x() + speed, this->pos().y());
}
void Heroes::moveUp(int speed) {
    this->setPos(this->pos().x(), this->pos().y() - speed);
}
void Heroes::moveDown(int speed) {
    this->setPos(this->pos().x(), this->pos().y() + speed);
}

void Heroes::changeImage(QString nameFile) {
    this->setPixmap(QPixmap(nameFile));
}

void Heroes::shoot(){
    Shuriken* shuriken = new Shuriken("img/shuriken.png");
    shuriken->setPos(this->pos().x() , this->pos().y());
    this->scene->addItem(shuriken);
    this->shurikens.push_back(shuriken);
}

void Heroes::beInvisible(){
    //TODO
}