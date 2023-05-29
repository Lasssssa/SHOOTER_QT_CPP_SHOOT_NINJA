

#ifndef MINI_PROJET_CPP_SHOOTER_H
#define MINI_PROJET_CPP_SHOOTER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QPainter>
#include <QRectF>
#include <QVector>

#include "ennemies.h"
#include "magicBalls.h"
#include "MyScene.h"

class MyScene;

class EnnemiesShooter : public Ennemies {
private :
    MyScene* scene;

public :
    QVector<MagicBalls*> magicBalls;

    EnnemiesShooter(MyScene* scene, QString nameFile);
    EnnemiesShooter(MyScene* scene,int life, QString nameFile);

    virtual ~EnnemiesShooter();


    void shoot();
};

#endif //MINI_PROJET_CPP_SHOOTER_H
