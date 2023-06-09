#include <QApplication>
#include "MainWindow.h"


/*
 * -------------------Ajout dans le jeu--------------------
 * Ajout des pouvoirs d'invisilibté
 * Ajout de potions de Heal
 * Ajout d'une épée qui fait plus de dégats de Zone
 * Ajout d'un ulti --> fonce sur tout le monde
 * Ajout de pièce ?
 *
 * -------------------Ajout dans les fonctionnalités--------------
 * - Faire l'interface du menu
 * - Ajout d'un menu de pause
 * - Faire le menu GameOver
 * - Faire un menu avec tous les scores
 * - Boutique ?
 * - Ajout d'un menu de sélection de personnage
 * - Ajout d'un menu de sélection de niveau (map différente)
 * - Ajout d'un menu de sélection de difficulté (plus de monstres, plus de dégats, plus de vie)
 *
 * -------------------Ajout dans le code--------------------
 * - Ajout d'un timer
 * - Ajout du pseudo
 * - Ajout de l'inventaire
 * --------------Chose prioritaire----------------
 * - Ajout d'un timer
 *
 * 
 * - Ajout du menu de base
 * -Ajout du menu de gameOver
 */

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return application.exec();
}
