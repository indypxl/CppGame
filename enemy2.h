#ifndef ENEMY2_H
#define ENEMY2_H

#include <enemy.h>

class Enemy2: public Enemy{
    Q_OBJECT
public:
    Enemy2(QGraphicsItem * parent=0);
public slots:
    void move(int speed = 5);

};

#endif // ENEMY2_H
