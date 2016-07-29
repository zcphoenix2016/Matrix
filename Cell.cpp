#include "Cell.hpp"

CellState Cell::nextState(unsigned int numOfLiveNeighbours)
{
    if(CELLSTATE_DEAD == m_state)
    {
        if(3 == numOfLiveNeighbours)
        {
            m_state = CELLSTATE_LIVE;
        }
    }
    else
    {
        if(2 > numOfLiveNeighbours
          || 3 < numOfLiveNeighbours)
        {
            m_state = CELLSTATE_DEAD;
        }
    }

    return m_state;
}

void Cell::setState(CellState state)
{
    m_state = state;
}

CellState Cell::getState()
{
    return m_state;
}
