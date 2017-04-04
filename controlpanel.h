#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class ControlPanel
{
private:
    int _numOfPuzzles = 3;

public:
    ControlPanel();
    ~ControlPanel();
    int numOfPuzzles() const;
    void setNumOfPuzzles(int numOfPuzzles);

    QPushButton *shuffleBtn = new QPushButton("Shuffle");
    QPushButton *resetBtn = new QPushButton("Reset");
    QLabel *numOfN = new QLabel("n=");
    QLineEdit *numOfNEdit = new QLineEdit(QString::number(_numOfPuzzles));
};

#endif // CONTROLPANEL_H
