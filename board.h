#ifndef BOARD_H
#define BOARD_H
#include <QGraphicsRectItem>
#include <QGraphicsScene>

class Board
{
private:
    int _numOfPuzzles;
    int _sideLength;
public:
    Board();
    ~Board();
    QGraphicsScene *init();
    int getNumOfPuzzles() const;
    void setNumOfPuzzles(int value);
    int getSideLength() const;
    void setSideLength(int sideLength);
};

#endif // BOARD_H
