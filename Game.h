#ifndef GAME
#define GAME


#include<QGraphicsView>
#include<Qwidget>
#include<QGraphicsScene>
#include"time.h"
#include"Score.h"
#include"Enemy.h"
#include"Enemy2.h"
#include<QKeyEvent>
#include<QGraphicsItem>
class Game:public QGraphicsView{
public:
    Game(QWidget *parent=0);
    QGraphicsScene * scene;
    Time * time;
    Score *score;

   // Enemy*enemy;
    void keyPressEvent(QKeyEvent *event);
    void keyPressEventt(QKeyEvent *eventt);
    //Enemy2 *enemy2;
    Enemy2 *player2;
    Enemy *player;
    //int link;
    QGraphicsPixmapItem*collider;
public slots:

    //void time_c();
    //void time_d();
    //void dialog();
};

#endif // GAME
