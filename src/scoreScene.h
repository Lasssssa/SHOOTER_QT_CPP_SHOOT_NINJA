

#ifndef MINI_PROJET_CPP_SCORESCENE_H
#define MINI_PROJET_CPP_SCORESCENE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QTableWidget>
#include <QVector>
#include <QPainter>
#include <iostream>
#include <QPushButton>
#include <QHeaderView>
#include <QLabel>
#include <QDialog>
#include <QLineEdit>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGraphicsProxyWidget>
#include <fstream>
#include <QTextStream>
#include <QFile>
#include <QDir>
#include <QStandardPaths>
#include <QCoreApplication>

#include <string>

//#include "MainWindow.h"

class MainWindow;

class ScoreScene : public QGraphicsScene {
    Q_OBJECT
private:
    QPixmap background;
    QPushButton* sauvegarder;
    QPushButton* retour;
    MainWindow* mainWindow;

public:
    ScoreScene(MainWindow* mainWindow, std::string name, int lastScore, QObject* parent = nullptr);
    virtual ~ScoreScene();

    void drawBackground(QPainter *painter, const QRectF &rect);

    public slots:
    void slot_continue();
    void close();
};



#endif //MINI_PROJET_CPP_SCORESCENE_H
