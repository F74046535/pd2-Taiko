#ifndef ENEMY
#define ENEMY


#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsItem>
#include<time.h>
#include<QKeyEvent>
class Enemy:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Enemy(QGraphicsItem *parent=0);

    //Enemy * enemy;
    /*void keyPressEvent(QKeyEvent *event);*/
public slots:
    void move();
    void spawn();

};
#endif // ENEMY

