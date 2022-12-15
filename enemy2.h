#ifndef ENEMY2_H
#define ENEMY2_H

#include "enemy.h"

class Enemy2: public Enemy{ /***4 inheritance***/
    Q_OBJECT
public:
    Enemy2(QGraphicsItem * parent=0, Health* h=0);
public slots:
    void move();
    void hit(int dmg);


};

#endif // ENEMY2_H
