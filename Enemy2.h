#ifndef ENEMY2
#define ENEMY2

#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsItem>
#include"time.h"
class Enemy2:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Enemy2(QGraphicsItem *parent=0);
    Enemy2 *enemy2;
public slots:
    void move2();
    void spawn2();
};

#endif // ENEMY2

