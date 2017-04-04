//#include "mainwindow.h"
#include <QApplication>
#include <QHBoxLayout>

#include <QGridLayout>
#include <QPainter>
#include <QGraphicsScene>
//#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGroupBox>
#include "cursor.h"
#include "puzzle.h"
#include "board.h"
#include "controlpanel.h"
#include <QRect>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication game(argc, argv);
    QWidget *mainBoard = new QWidget;
    Board *boardForPuzzles = new Board();
    ControlPanel *controlPanel = new ControlPanel();
    Puzzle *puzzles = new Puzzle();

    QGraphicsView *view = new QGraphicsView();
    QHBoxLayout *hLayout = new QHBoxLayout;
    QGridLayout *vLayout = new QGridLayout();

    boardForPuzzles->setSideLength(100);
    boardForPuzzles->setNumOfPuzzles(controlPanel->numOfPuzzles());
    view->setScene(boardForPuzzles->init());

    QObject::connect(controlPanel->shuffleBtn, SIGNAL(clicked()), &game, SLOT(quit()));

    hLayout->addWidget(controlPanel->numOfN);
    hLayout->addWidget(controlPanel->numOfNEdit);
    hLayout->addWidget(controlPanel->shuffleBtn);
    hLayout->addWidget(controlPanel->resetBtn);

    vLayout->addWidget(view, 0, 0, Qt::AlignLeft);
    vLayout->addLayout(hLayout, 1, 0, Qt::AlignHCenter);

    mainBoard->setLayout(vLayout);
    mainBoard->show();

    return game.exec();

    //MainWindow board;

    //board.setWindowTitle("Puzzle Game");

    //QGraphicsScene *scene = new QGraphicsScene();
    //Cursor *rect = new Cursor();
    //scene->addItem(rect);
   // QRect newRect(100,200,200,300);



    //rect->setFlag(QGraphicsItem::ItemIsFocusable);
    //rect->setFocus();

    //QGraphicsView *view = new QGraphicsView();
   // view->setScene(scene);
    //view->show();


    /*enum { NumGridRows = 3, NumGridColumns = 3 };
    QGridLayout *grid = new QGridLayout;
    grid->addWidget(view);*/

    //numOfNEdit->setText("3");
}
