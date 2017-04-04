#ifndef CURSOR_H
#define CURSOR_H

#include <QGraphicsRectItem>

class Cursor: public QGraphicsRectItem
{
public:
    Cursor();
    void keyPressEvent(QKeyEvent *event);
};

#endif // CURSOR_H
