#include"Game.h"
#include"time.h"
#include"Enemy.h"
#include"Enemy2.h"
#include<QTimer>
#include<QGraphicsTextItem>
#include<QBrush>
#include<QImage>
#include<Qtime>
#include<QObject>
#include<QGraphicsItem>
#include<QDialog>
#include<QKeyEvent>
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QKeyEvent>
#include"Enemy.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include<QDebug>
#include<stdlib.h>
#include<typeinfo>
QTimer*timer;
Game::Game(QWidget*parent){

    scene=new QGraphicsScene();
    scene->setSceneRect(0,0,600,600);
    setBackgroundBrush(QBrush(QImage(":/pics/123.JPG")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(600,600);

    collider=new QGraphicsPixmapItem();
    collider->setPixmap(QPixmap(":/pics/562_n.jpg"));
    collider->setPos(10,170);
    scene->addItem(collider);
    collider->setFlag(QGraphicsItem::ItemIsFocusable);
    collider->setFocus();

    time=new Time();
    scene->addItem(time);
    timer=new QTimer();
    //timer->setInterval(1000);
    QObject::connect(timer,SIGNAL(timeout()),time,SLOT(timer_timeout()));
    timer->start(1000);
    Enemy*player=new Enemy;
    scene->addItem(player);
    //player->setFlag(QGraphicsItem::ItemIsFocusable);
    //player->setFocus();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(1000);

    Enemy2 *player2=new Enemy2();
    scene->addItem(player2);
    QObject::connect(timer,SIGNAL(timeout()),player2,SLOT(spawn2()));
    timer->start(1000);

    score=new Score();
    score->setPos(score->x(),score->y()+25);
    scene->addItem(score);





}
void Game::keyPressEvent(QKeyEvent *event)
{

   if(event->key()==Qt::Key_J)
   {

        if (collider->collidingItems().size()>0.8)
        {
           score->increase();


        }

   }
   else if(event->key()==Qt::Key_K)
       if(collider->collidingItems().size()>0)
       {
           score->increase();
       }


}






//void Game::time_c(){
    //QTimer *timer2;
    //QObject::connect(timer2,SIGNAL(timeout()),player,SLOT(spawn()));
    //timer2->start(1000);
//}
//void Game::time_d(){
    //QTimer *timer3;
    //QObject::connect(timer3,SIGNAL(timeout()),player2,SLOT(spawn2()));
    //timer3->start(1000);
//}
