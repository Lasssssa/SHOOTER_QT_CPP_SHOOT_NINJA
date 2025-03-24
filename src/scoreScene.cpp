#include "scoreScene.h"


ScoreScene::ScoreScene(MainWindow* mainWindow, std::string name, int lastScore, QObject* parent) : QGraphicsScene(parent) {
    this->mainWindow = mainWindow;

    //Ajoute un fond d'écran
    this->background.load("img/score.png");
    this->setSceneRect(0, 0, background.width(), background.height());

    int width = this->width();
    int height = this->height();

    //Ajoute un label avec le score et le pseudo du joueur
    QLabel* score = new QLabel;
    score->setText("Last Game : \n" +QString::fromStdString(name) + " : " + QString::number(lastScore));

    //Aligne le text au centre
    score->setStyleSheet("QLabel {text-align: center; }");
    score->setStyleSheet("QLabel {background-color: transparent; color : red; font-size: 20px; font-weight: bold; font-family: Arial;  }");
    score->setGeometry(width/2,height/2, width, 50);

    QGraphicsProxyWidget* proxyWidget1 = addWidget(score);
    proxyWidget1->setPos(width/2 - 100, height/2 - 50);

    sauvegarder = new QPushButton;
    sauvegarder->setStyleSheet("QPushButton { background-color: transparent; border-image: url(img/continuer.png); }");
    sauvegarder->setGeometry(width/2,height/2, 200, 50);

    QGraphicsProxyWidget* proxyWidget = addWidget(sauvegarder);
    proxyWidget->setPos(width/2 - 100, height/2 + 25);


    retour = new QPushButton;
    retour->setStyleSheet("QPushButton { background-color: transparent; border-image: url(img/exit.png); }");
    retour->setGeometry(width/2,height/2, 200, 50);

    QGraphicsProxyWidget* proxyWidget2 = addWidget(retour);
    proxyWidget2->setPos(width/2 - 100, height/2 + 100);

    //Connecte le bouton continuer à la fonction slot_continue()
    QObject::connect(sauvegarder, SIGNAL(clicked()), this, SLOT(slot_continue()));

    //Connecte le bouton retour à la fonction close()
    QObject::connect(retour, SIGNAL(clicked()), this, SLOT(close()));

}
ScoreScene::~ScoreScene() {
    retour->~QPushButton();
    sauvegarder->~QPushButton();
}

void ScoreScene::drawBackground(QPainter *painter, const QRectF &rect) {
    Q_UNUSED(rect);
    painter->drawPixmap(QRectF(0,0,background.width(), background.height()), background, sceneRect());
}
