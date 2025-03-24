
#ifndef MINI_PROJET_CPP_HEALTHBAR_H
#define MINI_PROJET_CPP_HEALTHBAR_H

#include <QPainter>
#include <QGraphicsPixmapItem>

class HealthBar : public QGraphicsPixmapItem {
private :

public :
    HealthBar(QString nameFile, int x, int y);
    virtual ~HealthBar();

    void updateLife(QString nameFile);
    void moveHealthBar();
};


#endif //MINI_PROJET_CPP_HEALTHBAR_H
