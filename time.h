#ifndef TIME
#define TIME

#include<QGraphicsItem>
#include<QObject>
#include"Enemy.h"
#include"Enemy2.h"
class Time:public QGraphicsTextItem{
    Q_OBJECT
public:
    Time(QGraphicsItem *parent=0);
    int getTime();
    void dialog();
public slots:
    void timer_timeout();

private:
    int time;

};

#endif // TIME

