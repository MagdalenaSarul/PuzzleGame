 #include "board.h"

int Board::getSideLength() const
{
    return _sideLength;
}

void Board::setSideLength(int sideLength)
{
    _sideLength = sideLength;
}

Board::Board()
{

}

Board::~Board()
{

}

void Board::setNumOfPuzzles(int value)
{
    _numOfPuzzles = value;
}

int Board::getNumOfPuzzles() const
{
    return _numOfPuzzles;
}


QGraphicsScene* Board::init()
{
    QGraphicsScene *scene = new QGraphicsScene();
    for (int posY = 0; posY < _numOfPuzzles; posY++)
    {
        for (int posX = 0; posX < _numOfPuzzles; posX++)
        {
            QGraphicsRectItem *field = new QGraphicsRectItem();
            field->setRect(posX*_sideLength*1.1,posY*_sideLength*1.1,_sideLength,_sideLength);
            scene->addItem(field);
        }
    }
    return scene;
}
