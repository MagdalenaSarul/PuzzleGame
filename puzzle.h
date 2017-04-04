#ifndef PUZZLE_H
#define PUZZLE_H
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsScene>

class Puzzle
{
private:
    int _orderNumber;
public:
    Puzzle();
    //Puzzle(int x, int y, int sizeX, int sizeY, int digit);
    //QGraphicsScene* drawPuzzles(int numOfPuzzles);
    ~Puzzle();
};

#endif // PUZZLE_H
