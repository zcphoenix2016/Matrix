#pragma once

#include "basetypes.hpp"

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
    CellState nextState(u32);
private:
    CellState m_state = CELLSTATE_DEAD;
};
