#include"time.h"
#include"game.h"
#include<QFont>
#include<QTimer>
#include<QDebug>
#include<QDialog>
#include<QGraphicsScene>
#include<QGraphicsItem>
#include<QGraphicsView>
#include<QWidget>
Time::Time(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    time=30;
    setPlainText(QString("Time: ")+QString::number(time));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",16));

}


void Time::timer_timeout()
{
    if(time>0){
     time--;
     setPlainText(QString("Time: ")+QString::number(time));
    }
    if(time==1)dialog();

}
int Time::getTime(){
    return time;
}
   void Time::dialog()
{
    QDialog *dialog1=new QDialog;
    //dialog1->setWindowFlags (Qt::FramelessWindowHint|Qt::CustomizeWindowHint | (Qt::Window) | Qt::WindowStaysOnTopHint);
    dialog1->setStyleSheet("background-color: yellow");
    if(time==1){
    dialog1->show();
   }
}
