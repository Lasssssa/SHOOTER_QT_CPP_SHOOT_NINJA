
#ifndef MINI_PROJET_CPP_SHURIKEN_H
#define MINI_PROJET_CPP_SHURIKEN_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QPainter>
#include <QRectF>
#include <QVector>
#include <QGraphicsItem>

class Shuriken : public QGraphicsPixmapItem{
private :
    int speed;
    int damage;

public :

    Shuriken(QString nameFile);
    Shuriken(int speed, int damage, QString nameFile);

    virtual ~Shuriken();

    void setSpeed(int speed);
    void setDamage(int damage);

    int getSpeed();
    int getDamage();

    void move();
};

#endif //MINI_PROJET_CPP_SHURIKEN_H
