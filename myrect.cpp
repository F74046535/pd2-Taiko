#include"myrect.h"
#include"Enemy.h"
#include"Enemy2.h"
#include<QTimer>
#include<QGraphicsScene>
#include"game.h"
extern Game*game;
void Myrect::spawn()
{
    enemy=new Enemy();
    game->scene->addItem(enemy);
    enemy->setFlag(QGraphicsItem::ItemIsFocusable);
    enemy->setFocus();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),enemy,SLOT(move()));
    timer->start(50);
}
void Myrect::spawn2()
{
    enemy2=new Enemy2();
    game->scene->addItem(enemy2);
    enemy2->setFlag(QGraphicsItem::ItemIsFocusable);
    enemy2->setFocus();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),enemy2,SLOT(move2()));
    timer->start(50);
}
