#include"Enemy2.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include"Game.h"
#include<QDebug>
#include<stdlib.h>
Enemy2::Enemy2(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    int random_number=rand()%100;
    setPos(1000+random_number,80);
    setPixmap(QPixmap(":/pics/5252.png"));

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move2()));
    timer->start(50);


}
void Enemy2::move2(){

    setPos(x()-10,80);
    /* if (pos().x()<0)
    {
        scene()->removeItem(this);
        delete this;

    }*/
}
void Enemy2::spawn2()
{
    enemy2=new Enemy2();
    scene()->addItem(enemy2);
    enemy2->setFlag(QGraphicsItem::ItemIsFocusable);
    enemy2->setFocus();
}

