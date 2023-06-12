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
    this->startGame->setStyleSheet("background-color: #0f77fb; color: #000000");

    this->quitGame = new QPushButton("Quit Game");
    this->quitGame->setGeometry(0, 0, 200, 50);
    this->quitGame->setStyleSheet("background-color: #0f77fb; color: #000000");


    pseudoEdit = new QLineEdit();
    pseudoEdit->setGeometry(0, 0, 200, 50);

    QGraphicsProxyWidget* proxyWidget1 = addWidget(startGame);
    QGraphicsProxyWidget* proxyWidget3 = addWidget(pseudoEdit);
    QGraphicsProxyWidget* proxyWidget2 = addWidget(quitGame);

    proxyWidget1->setPos(width/2 , height/2 - 10);
    proxyWidget3->setPos(width/2 , height/2 - 70);
    proxyWidget2->setPos(width/2 , height/2 + 50);

    connect(this->startGame, SIGNAL(clicked()), this, SLOT(slot_startGame()));
    connect(this->quitGame, SIGNAL(clicked()), this, SLOT(slot_closeGame()));

}

StartScene::~StartScene() {
    startGame->~QPushButton();
}

void StartScene::drawBackground(QPainter *painter, const QRectF &rect) {
    Q_UNUSED(rect);
    painter->drawPixmap(QRectF(0,0,background.width(), background.height()), background, sceneRect());
}
