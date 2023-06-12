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
//INCLUDE POUR SLEEP
#include <unistd.h>

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
    QElapsedTimer* ultiInterval;
    QElapsedTimer* invisibilityInterval;
    QTimer* shootTimer;


    int step = 500;
    int difficulty = 4;

    HealthBar* healthBar;
    QGraphicsTextItem* scoreText;

    QGraphicsTextItem* ultimText;
    QGraphicsTextItem* invisibilityText;

    //PARTIE SCORE
    int countShooter;
    int countEnnemies;
    QGraphicsTextItem* scoreShooter;
    QGraphicsTextItem* scoreEnnemies;
    QGraphicsPixmapItem* shooterImage;
    QGraphicsPixmapItem* ennemiesImage;


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

    void spawnUltim();

    Heroes* getHeroes() { return perso; }

    void clearShurikens();
    void clearEnnemies();
    void clearEnnemiesShooter();

    void createEnnemy();
    void createShooterEnnemy();

    void clearAll();
    void clearAllEnnemies();

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
