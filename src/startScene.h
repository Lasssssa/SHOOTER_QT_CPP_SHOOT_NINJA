
#ifndef MINI_PROJET_CPP_STARTSCENE_H
#define MINI_PROJET_CPP_STARTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPushButton>
#include <QGraphicsProxyWidget>
//Include pour les connect :
#include <QObject>
#include <iostream>
#include <QLabel>
#include <QLineEdit>

//#include "MainWindow.h"

class MainWindow;

class StartScene : public QGraphicsScene {
    Q_OBJECT
private :
    QPixmap background;
    MainWindow* mainWindow;
    QPushButton* startGame;
    QLineEdit* pseudoEdit;
public :
    StartScene(MainWindow *mainWindow, QObject *parent = nullptr);

    void drawBackground(QPainter *painter, const QRectF &rect);

    virtual ~StartScene();

public slots:
    void slot_startGame();

};

#endif //MINI_PROJET_CPP_STARTSCENE_H
