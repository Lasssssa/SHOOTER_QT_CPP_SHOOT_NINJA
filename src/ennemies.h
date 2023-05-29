//
// Created by theop on 25/05/2023.
//

#ifndef MINI_PROJET_CPP_ENNEMIES_H
#define MINI_PROJET_CPP_ENNEMIES_H

#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QRandomGenerator>


class Ennemies : public QGraphicsPixmapItem{
private :
    int life;
    float speedX;
    int speedY;
public :
    Ennemies(QString nameFile);
    Ennemies(int life, QString nameFile);

    virtual ~Ennemies();

    void setLife(int life);
    void setSpeedX(int speedX);
    void setSpeedY(int speedY);

    int getLife();
    float getSpeedX();
    int getSpeedY();

    void move();
};

#endif //MINI_PROJET_CPP_ENNEMIES_H
