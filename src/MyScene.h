#ifndef CPP_QT_TPMINIPROJET_MYSCENE_H
#define CPP_QT_TPMINIPROJET_MYSCENE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QDebug>
#include <QKeyEvent>
#include <QVector>
#include <QPainter>
#include <QPixmap>
#include <QPointF>

#include "heroes.h"


class MyScene : public QGraphicsScene {
    Q_OBJECT
private :
    QTimer* timer;
    Heroes *perso;
    QPixmap background;
    //QVector<Ennemies*> ennemies;
    QPointF center;

public:
    MyScene(QObject* parent = nullptr);
    virtual ~MyScene();
    void drawBackground(QPainter* painter, const QRectF& rect);
    //const QVector<QGraphicsPixmapItem*>& getEnnemies() { return ennemies;}

protected:
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);

public slots:
    void update();
};

#endif //CPP_QT_TPMINIPROJET_MYSCENE_H
