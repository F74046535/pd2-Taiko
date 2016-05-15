#include "mainwindow.h"
#include"Game.h"
#include"Enemy.h"
#include"Enemy2.h"
#include <QApplication>
#include<QTimer>
Game *game;
//int link;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   MainWindow w;
    w.show();


    return a.exec();
}

