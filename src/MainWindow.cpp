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

    helpMenu = menuBar()->addMenu(tr("&Help"));
    QAction* actionHelp = new QAction(tr("&Rules"), this);

    connect(actionHelp, SIGNAL(triggered()), this, SLOT(slot_aboutMenu()));
    helpMenu->addAction(actionHelp);
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
    msgBox.setWindowTitle("Rules");
    QString rules = "Rules : \n\n"
                        "The goal of the game is to survive as long as possible.\n"
                        "You can move forward with the Z key.\n"
                        "To move backwards, press the S key.\n"
                        "To move to the left, press the Q key.\n"
                        "To move to the right, press the D key.\n"
                        "You can shoot with the space bar.\n"
                        "You can get your score at the end of the game.\n"
                        "You can also get the last 10 scores in the end table. \n"
                        "As for the score, you earn points by surviving time. \n"
                        "You can also earn points by eliminating enemies. \n"
                        "If you are hit by an enemy, you lose life. \n"
                        "If your life reaches 0, you lose the game. \n"
                        "Also, you can use the ultimate with the E key every 25 seconds. \n"
                        "Also, you can use the invisibility with the R key every 15 seconds. \n"
                        "Good luck !"
                        "By the way, if you don't enter any name, your score will be saved as 'Inconnu'.";
    msgBox.setText(rules);
    msgBox.setModal(true);
    msgBox.exec();
}

void StartScene::slot_startGame(){
    //std::cout << "Start Game" << std::endl;
    if(this->pseudoEdit->text() != ""){
        this->mainWindow->setName(this->pseudoEdit->text().toStdString());
    }
    this->mainWindow->showGameScene();
}

void MainWindow::setName(std::string name){
    this->name = name;
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

bool playerIsNotInFile(std::string name){
    std::ifstream file("score.txt");
    std::string str;
    while (std::getline(file, str)) {
        std::string pseudo = str.substr(0, str.find(" "));
        if(pseudo == name){
            return false;
        }
    }
    return true;
}

void exportScore(int score, std::string name){
    std::ifstream file("score.txt");
    std::string str;
    std::string newFile = "";
    if(file.peek() == std::ifstream::traits_type::eof() || playerIsNotInFile(name)){
        std::ofstream file2("score.txt");
        //Recopie le fichier
        while(std::getline(file, str)){
            newFile += str + "\n";
        }
        file2 << newFile;
        file2 << name + " " + std::to_string(score) + "\n";
        file2.close();
        return;
    }else {
        while (std::getline(file, str)) {
            std::string pseudo = str.substr(0, str.find(" "));
            std::string scorePlayer = str.substr(str.find(" ") + 1, str.length());
            if(pseudo == name){
                if(std::stoi(scorePlayer) < score){
                    newFile += name + " " + std::to_string(score) + "\n";
                }else{
                    newFile += str + "\n";
                }
            }else{
                newFile += str + "\n";
            }
        }
        file.close();
        std::ofstream file2("score.txt");
        file2 << newFile;
        file2.close();
    }
}

void ScoreScene::slot_continue(){
    mainWindow->restartGameWindow();
}

void StartScene::slot_closeGame(){
    //std::cout << "Close Game" << std::endl;
    this->mainWindow->close();
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