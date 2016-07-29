#include "Matrix.hpp"

Matrix::Matrix(unsigned int rows, unsigned int cols)
    : m_rows(rows), m_cols(cols)
{
    for(int i = 0; i < rows * cols; i ++)
    {
        std::shared_ptr<Cell> l_cell = std::make_shared<Cell>();
	m_vec.push_back(l_cell);
    }
}

std::shared_ptr<Cell> Matrix::getCell(unsigned int row, unsigned int col)
{
    return m_vec.at(col * m_rows + row);    
}
