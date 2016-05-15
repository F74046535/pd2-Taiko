#ifndef MYRECT
#define MYRECT
#include<QObject>
#include"Enemy.h"
#include"Enemy2.h"
#include<QGraphicsItem>
class Myrect:public QObject{
    Q_OBJECT
public:
    Enemy *enemy;
    Enemy2*enemy2;
public slots:
    void spawn();
    void spawn2();

};

#endif // MYRECT

