#include "mainwindow.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>

int main(int argc, char *argv[])
{
    QApplication game(argc, argv);
    //MainWindow board;

    //board.setWindowTitle("Puzzle Game");
    QWidget *board = new QWidget;
    QLabel *numOfN = new QLabel("n=");
    QLineEdit *numOfNEdit = new QLineEdit("3");
    //numOfNEdit->setText("3");
    QPushButton *shuffleBtn = new QPushButton("Shuffle");
    QPushButton *resetBtn = new QPushButton("Reset");

    QObject::connect(shuffleBtn, SIGNAL(clicked()), board, SLOT(quit()));

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(numOfN);
    layout->addWidget(numOfNEdit);
    layout->addWidget(shuffleBtn);
    layout->addWidget(resetBtn);

    board->setLayout(layout);
    board->show();

    return game.exec();
}
