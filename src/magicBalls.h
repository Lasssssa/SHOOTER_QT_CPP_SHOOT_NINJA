
#ifndef MINI_PROJET_CPP_MAGICBALLS_H
#define MINI_PROJET_CPP_MAGICBALLS_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QPainter>
#include <QRectF>
#include <QVector>

class MagicBalls : public QGraphicsPixmapItem{
private :
    int speedX;
    int speedY;
public :
    MagicBalls(QString nameFile);
    MagicBalls(int speedX, int speedY, QString nameFile);

    virtual ~MagicBalls();

    void setSpeedX(int speedX);
    void setSpeedY(int speedY);

    int getSpeedX();
    int getSpeedY();

    void move();
};

#endif //MINI_PROJET_CPP_MAGICBALLS_H
