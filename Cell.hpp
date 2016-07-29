#pragma once

enum CellState
{
    CELLSTATE_DEAD,
    CELLSTATE_LIVE
};

class Cell
{
public:
    Cell() = default;
    Cell(CellState state) : m_state(state)
    {
    }
    void setState(CellState);
    CellState getState();
    CellState nextState(unsigned int);
private:
    CellState m_state = CELLSTATE_DEAD;
};
