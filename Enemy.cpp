#include"Enemy.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include"Game.h"
#include<QDebug>
#include<stdlib.h>
#include<time.h>
#include<QKeyEvent>

Enemy::Enemy(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(){
    //friend class Game;
    int random_number=rand()%100;
    setPos(600-random_number,80);
    setPixmap(QPixmap(":/pics/5151.png"));

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}
void Enemy::move(){
    setPos(x()-10,80);
    /* if (pos().x()<0)
    {
        scene()->removeItem(this);
        delete this;

    }*/

}


void Enemy::spawn()
{
    Enemy *enemy=new Enemy();
    scene()->addItem(enemy);
    enemy->setFlag(QGraphicsItem::ItemIsFocusable);
    enemy->setFocus();

}
/*void Enemy::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<"dd";
   if(event->key()==Qt::Key_J)
   {
        enemy->pos();
       if(pos().x()<100)
       {

          delete this;
       }


       //enemy->pos();
        //if(pos().x()<50)
        //game->score->increase();
       //delete this;
   }


}*/



