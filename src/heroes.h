
#ifndef MINI_PROJET_CPP_HEROES_H
#define MINI_PROJET_CPP_HEROES_H

#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>


#include "MyScene.h"
#include "shuriken.h"

class MyScene;

class Heroes : public QGraphicsPixmapItem{
private :
    int life;
    int speed;
    MyScene* scene;
    int score;

public :
    bool invisible;
    int magicPower;
    QVector<Shuriken*> shurikens;

    Heroes(MyScene* scene, QString nameFile);
    Heroes(MyScene* scene, int life, int speed, QString nameFile);

    virtual ~Heroes();

    void setLife(int life);
    void setSpeed(int speed);
    int getLife();
    int getSpeed();

    void shootSpecial();

    int getScore();
    void setScore(int score);

    void moveLeft(int speed);
    void moveRight(int speed);
    void moveUp(int speed);
    void moveDown(int speed);

    void changeImage(QString nameFile);

    void shoot();
    void beInvisible();
};

#endif //MINI_PROJET_CPP_HEROES_H