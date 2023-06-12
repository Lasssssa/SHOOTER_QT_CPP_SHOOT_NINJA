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

    tableScore = new QTableWidget;
    tableScore->setColumnCount(2);
    tableScore->setRowCount(10);
    tableScore->setGeometry(width/2,height/2, 320, 200);

    tableScore->setHorizontalHeaderItem(0, new QTableWidgetItem("Pseudo"));
    tableScore->setHorizontalHeaderItem(1, new QTableWidgetItem("Score"));

    tableScore->setColumnWidth(0, 150);
    tableScore->setColumnWidth(1, 150);

    tableScore->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //Recupere le nombre de joueur et coupe si il y en a plus de 10
    int nbJoueur = 0;
    nbJoueur = getNbJoueur();
    if(nbJoueur > 10) {
        nbJoueur = 10;
    }

    //Recupere les scores et les pseudos dans le fichier score.txt
    std::string line;
    std::ifstream file("score.txt");
    if (file.is_open()) {
        for(int i = 0; i < nbJoueur; i++) {
            getline(file, line);
            std::string pseudo = line.substr(0, line.find(" "));
            std::string score = line.substr(line.find(" ") + 1, line.length());
            tableScore->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(pseudo)));
            tableScore->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(score)));
        }
        file.close();
    }
    QGraphicsProxyWidget* proxyWidget3 = addWidget(tableScore);
    proxyWidget3->setPos(width/2-150, height - 200);

}

int getNbJoueur() {
    int nbJoueur = 0;
    std::string line;
    std::ifstream file("score.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            nbJoueur++;
        }
        file.close();
    }
    return nbJoueur;
}

ScoreScene::~ScoreScene() {
    retour->~QPushButton();
    sauvegarder->~QPushButton();
}

void ScoreScene::drawBackground(QPainter *painter, const QRectF &rect) {
    Q_UNUSED(rect);
    painter->drawPixmap(QRectF(0,0,background.width(), background.height()), background, sceneRect());
}
