#include "puzzle.h"

Puzzle::Puzzle()
{

}

/*Puzzle::Puzzle(int x, int y, int sizeX, int sizeY, int digit)
{
    QGraphicsRectItem *rectShape = new QGraphicsRectItem();
    QGraphicsTextItem *digitText = new QGraphicsTextItem(QString::number(digit));
    rectShape->setRect(x, y, sizeX, sizeY);
    digitText->setPos(x+50, y+50);
}

QGraphicsScene* Puzzle::drawPuzzles(int numOfPuzzles)
{
    QGraphicsScene *scene = new QGraphicsScene();
    for (int posY = 0; posY < numOfPuzzles; posY++)
    {
        for (int posX = 0; posX < numOfPuzzles; posX++)
        {
            if(posY == (numOfPuzzles-1) && posX == ( numOfPuzzles-1))
                break;
            Puzzle *puzzles = new Puzzle(posX*110,posY*110,100,100);
            scene->addItem(puzzles);
        }
    }
    return scene;
}*/

Puzzle::~Puzzle()
{

}
