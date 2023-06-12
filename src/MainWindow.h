#ifndef CPP_QT_TPMINIPROJET_MAINWINDOW_H
#define CPP_QT_TPMINIPROJET_MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QMessageBox>
#include <iostream>
#include <QString>


#include "MyScene.h"
#include "scoreScene.h"
#include "startScene.h"

//Inlude pour sleep()
#include <unistd.h>
#include <string>

class MainWindow : public QMainWindow {
    Q_OBJECT

private :
    MyScene* mainScene;
    StartScene* startScene;
    ScoreScene* scoreScene;
    QGraphicsView* mainView;
    QMenu* helpMenu;
    std::string name;
    int lastScore;
    int bestScore;

public:
    MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow();
    void showGameScene();
    void gameOver();
    void restartGameWindow();
    void restartMenu();
    void setName(std::string name);

public slots:
    void slot_aboutMenu();
};

int getLastScore();

std::string getLastName();

void exportScore(int score, std::string name);

bool playerIsNotInFile(std::string name);

#endif //CPP_QT_TPMINIPROJET_MAINWINDOW_H
