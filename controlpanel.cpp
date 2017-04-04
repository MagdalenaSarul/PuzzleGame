#include "controlpanel.h"

ControlPanel::ControlPanel()
{

}

ControlPanel::~ControlPanel()
{

}

int ControlPanel::numOfPuzzles() const
{
    return _numOfPuzzles;
}

void ControlPanel::setNumOfPuzzles(int numOfPuzzles)
{
    _numOfPuzzles = numOfPuzzles;
}

