#pragma once

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
    }
    void setState(CellState);
    CellState nextState(unsigned int);
private:
    CellState m_state = CELLSTATE_DEAD;
};
