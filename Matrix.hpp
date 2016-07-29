#pragma once

#include <vector>
#include <memory>
#include "Cell.hpp"

class Matrix
{
public:
    Matrix(unsigned int rows, unsigned int cols);
    CellState getCellState(unsigned int row, unsigned int col);
    void setCellState(unsigned int row, unsigned int col, CellState state);
    void nextGeneration();
private:
    unsigned int m_rows = 0;
    unsigned int m_cols = 0;
    std::vector<std::shared_ptr<Cell>> m_vec;
};
