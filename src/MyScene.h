#ifndef CPP_QT_TPMINIPROJET_MYSCENE_H
#define CPP_QT_TPMINIPROJET_MYSCENE_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QDebug>
#include <QKeyEvent>


class MyScene : public QGraphicsScene {
    Q_OBJECT
private :
    QTimer* timer;
    QGraphicsPixmapItem* perso;

public:
    MyScene(QObject* parent = nullptr);
    virtual ~MyScene();

protected:
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);

public slots:
    void update();
};


#endif //CPP_QT_TPMINIPROJET_MYSCENE_H
