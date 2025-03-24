#include "healthBar.h"

HealthBar::HealthBar(QString nameFile, int x, int y) : QGraphicsPixmapItem(QPixmap(nameFile)) {
    setPos(x,y);
}

HealthBar::~HealthBar() {

}

void HealthBar::updateLife(QString nameFile) {
    setPixmap(QPixmap(nameFile));
}

void HealthBar::moveHealthBar() {
    setPos(this->x(), this->y() -2);
}