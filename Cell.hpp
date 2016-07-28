#pragma once

#include <iostream>

enum CellState
{
    CELLSTATE_LIVE,
    CELLSTATE_DEAD
};

class Cell
{
public:
    Cell(CellState state) : m_state(state)
    {
        std::cout << " Cell constructed. " << std::endl;	    
    }
    void setState(CellState);
    CellState nextState(unsigned int);
private:
    CellState m_state = CELLSTATE_DEAD;
};
