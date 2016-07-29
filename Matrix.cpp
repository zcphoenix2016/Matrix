#include "Matrix.hpp"

Matrix::Matrix(unsigned int rows, unsigned int cols)
    : m_rows(rows), m_cols(cols)
{
    for(int i = 0; i < rows * cols; i ++)
    {
        auto l_cell = std::make_shared<Cell>();
	m_vec.push_back(l_cell);
    }
}

CellState Matrix::getCellState(unsigned int row, unsigned int col)
{
    return m_vec.at(row * m_cols + col)->getState();    
}

void Matrix::setCellState(unsigned int row, unsigned int col, CellState state)
{
    if(0 != row && 0 != col)
    {
        m_vec.at(row * m_cols + col)->setState(state);
    } 
}

void Matrix::nextGeneration()
{
}


