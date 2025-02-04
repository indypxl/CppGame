#include "mainm.h"
#include "play.h"

MainM::MainM(QWidget *)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1800,1000);
    setBackgroundBrush(QBrush(QImage(":/gfx/gfx/bg52.png")));
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1800,1000);  //set the size of the window
    show();
    startup();
}

void MainM::startup()
{
    button = new Play();
    scene->addItem(button);
}

