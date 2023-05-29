#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->startScene = new StartScene(this);
    this->mainScene = nullptr;
    this->scoreScene = nullptr;
    this->mainView = new QGraphicsView;

    this->name = "Inconnu";
    this->lastScore = 0;
    this->mainView->setScene(this->startScene);
    this->setCentralWidget(mainView);
    this->setWindowTitle("MINI PROJET");
    this->resize(700, 700);
    this->setMinimumSize(700, 700);
    this->setMaximumSize(700, 700);

    //this->mainScene = new MyScene(this);
    //this->scoreScene = new ScoreScene(this, "Inconnu", 0, nullptr);
    //helpMenu = menuBar()->addMenu(tr("&Help"));
    //QAction* actionHelp = new QAction(tr("&About"), this);

    //connect(actionHelp, SIGNAL(triggered()), this, SLOT(slot_aboutMenu()));
    //helpMenu->addAction(actionHelp);
    //Connect the signal from the main scene to the slot of the main window
    //connect(this->mainScene, SIGNAL(gameOver()), this, SLOT(showGameOverScene()));
}


std::string getLastName(){
    std::ifstream file("score.txt");
    std::string str;
    std::string lastName = "";
    while (std::getline(file, str)) {
        std::string pseudo = str.substr(0, str.find(" "));
        std::string score = str.substr(str.find(" ") + 1, str.length());
        lastName = pseudo;
    }
    return lastName;
}

int getLastScore(){
    std::ifstream file("score.txt");
    std::string str;
    int lastScore = 0;
    while (std::getline(file, str)) {
        std::string pseudo = str.substr(0, str.find(" "));
        std::string score = str.substr(str.find(" ") + 1, str.length());
        lastScore = std::stoi(score);
    }
    return lastScore;
}
MainWindow::~MainWindow() {
    if (this->mainScene != nullptr) {
        this->mainScene->~MyScene();
    }
    if(this->startScene != nullptr){
        this->startScene->~StartScene();
    }
    if(this->mainView != nullptr){
        this->mainView->~QGraphicsView();
    }
}

void MainWindow::slot_aboutMenu(){
    QMessageBox msgBox;
    msgBox.setText("A small QT/C++ projet...");
    msgBox.setModal(true); // on souhaite que la fenetre soit modale i.e qu'on ne puisse plus cliquer ailleurs
    msgBox.exec();
}

void StartScene::slot_startGame(){
    //std::cout << "Start Game" << std::endl;
    this->mainWindow->showGameScene();
}

void MainWindow::showGameScene(){
    //std::cout << "Start Game" << std::endl;
    this->mainScene = new MyScene(this);
    this->mainView->setScene(this->mainScene);
    this->mainScene->startGame();
}

void MyScene::checkLife() {
    if (perso->getLife() <= 0) {
        this->stopGame();
        this->mainWindow->gameOver();
    }
}

void MainWindow::gameOver() {
    this->lastScore = this->mainScene->getHeroes()->getScore();
    exportScore(this->lastScore, this->name);
    this->scoreScene = new ScoreScene(this, this->name,this->lastScore);
    this->mainView->setScene(this->scoreScene);
}

void exportScore(int score, std::string name){
    std::ofstream file("score.txt", std::ios::app);
    file << name << " " << score << std::endl;
    file.close();
}

void ScoreScene::slot_continue(){
    mainWindow->restartGameWindow();
}



void ScoreScene::close(){
    this->mainWindow->restartMenu();
}

void MainWindow::restartMenu() {
    this->startScene->~StartScene();
    this->startScene = nullptr;
    this->startScene = new StartScene(this);
    this->mainView->setScene(this->startScene);
}

void MainWindow::restartGameWindow(){
    this->mainScene->~MyScene();
    this->mainScene = new MyScene(this);
    this->mainView->setScene(this->mainScene);
    this->mainScene->startGame();
}