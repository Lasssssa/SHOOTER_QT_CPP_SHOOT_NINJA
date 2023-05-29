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
#include <QDebug>
#include <iostream>
#include <QRandomGenerator>
#include <QElapsedTimer>
#include <QTime>

#include "heroes.h"
#include "ennemies.h"
#include "shooter.h"
#include "healthBar.h"


class MainWindow;
class Heroes;
class EnnemiesShooter;

class MyScene : public QGraphicsScene {
    Q_OBJECT
private :
    MainWindow* mainWindow;
    QTimer* timer;
    QTimer* spawnEnnemies;
    Heroes* perso;
    QPixmap background;
    QPointF position;
    QVector<Ennemies*> ennemies;
    QVector<EnnemiesShooter*> ennemiesShooter;
    QVector<int> keysPressed;
    QElapsedTimer* shootInterval;
    QTimer* shootTimer;

    HealthBar* healthBar;

    QGraphicsTextItem* scoreText;

public:
    MyScene(MainWindow* mainWdow, QObject* parent = nullptr);
    virtual ~MyScene();
    void drawBackground(QPainter* painter, const QRectF& rect);
    void checkKeysPressed();
    void checkCollisions();
    void checkLife();

    void startGame();
    void reStartGame();
    void stopGame();

    Heroes* getHeroes() { return perso; }

    void clearShurikens();
    void clearEnnemies();
    void clearEnnemiesShooter();




    void createEnnemy();
    void createShooterEnnemy();

    void clearAll();


protected:
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);

public slots:
    void update();
    void spawnEnnemy();
    void shootOfEnnemies();

    signals :
    void gameOver();
};

#endif //CPP_QT_TPMINIPROJET_MYSCENE_H
