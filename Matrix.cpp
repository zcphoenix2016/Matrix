#include "Matrix.hpp"

Matrix::Matrix(u32 rows, u32 cols)
       : m_rows(rows), m_cols(cols)
{
    for(int i = 0; i < rows * cols; i ++)
    {
        auto l_cell = std::make_shared<Cell>();
	m_vec.push_back(l_cell);
    }
}

std::shared_ptr<Cell> Matrix::getCell(u32 row, u32 col)
{
    return m_vec.at(row * m_cols + col);
}

CellState Matrix::getCellState(u32 row, u32 col)
{
    return getCell(row, col)->getState();    
}

void Matrix::setCellState(u32 row, u32 col, CellState state)
{
    if(0 != row && 0 != col)
    {
        getCell(row, col)->setState(state);
    } 
}

u32 Matrix::getNumOfLiveNeighbours(u32 row, u32 col)
{
    u32 numOfLiveNeighbours = 0;
    u32 subRow = 0, subCol = 0;
    for(subRow = row - 1; subRow <= row + 1; subRow ++)
    {
        for(subCol = col - 1; subCol <= col + 1; subCol ++)
	{
            if(subRow != row or subCol != col) 
	    {
                if(CELLSTATE_LIVE == getCellState(subRow, subCol))
		{
                    numOfLiveNeighbours ++;
		}
	    }
	}
    }

    return numOfLiveNeighbours;
}

void Matrix::nextGeneration()
{
    u32 row = 0, col = 0;
    for(row = 1; row < m_rows - 1; row ++)
    {
        for(col = 1; col < m_cols - 1; col ++)
	{
           getCell(row, col)->nextState(getNumOfLiveNeighbours(row, col)); 
	}
    }
}


