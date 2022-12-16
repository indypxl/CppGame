#ifndef OPTIONS_H
#define OPTIONS_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>

class Options: public QGraphicsView, public QGraphicsPixmapItem
{Q_OBJECT
public:
    Options(QGraphicsItem* parent=nullptr);
    ~Options();

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *);
    void clicked();
};

#endif // OPTIONS_H
