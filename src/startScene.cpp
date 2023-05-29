#include "startScene.h"

StartScene::StartScene(MainWindow* mainWindow, QObject* parent) : QGraphicsScene(parent) {
    this->mainWindow = mainWindow;

    //Ajoute un fond d'écran
    this->background.load("img/start.png");
    this->setSceneRect(0, 0, background.width(), background.height());

    int width = this->width();
    int height = this->height();
    //Ajoute un bouton pour lancer le jeu
    this->startGame = new QPushButton("Start Game");
    this->startGame->setGeometry(0, 0, 200, 50);
    this->startGame->setStyleSheet("background-color: #000000; color: #ffffff");

    QGraphicsProxyWidget* proxyWidget1 = addWidget(startGame);
    proxyWidget1->setPos(width/2 - 100, height/2 - 50);

    connect(this->startGame, SIGNAL(clicked()), this, SLOT(slot_startGame()));

}

StartScene::~StartScene() {
    startGame->~QPushButton();
}

void StartScene::drawBackground(QPainter *painter, const QRectF &rect) {
    Q_UNUSED(rect);
    painter->drawPixmap(QRectF(0,0,background.width(), background.height()), background, sceneRect());
}
