#pragma once

#include <vector>
#include <memory>
#include "Cell.hpp"
#include "basetypes.hpp"

class Matrix
{
public:
    Matrix(u32 rows, u32 cols);
    CellState getCellState(u32 row, u32 col);
    void setCellState(u32 row, u32 col, CellState state);
    void nextGeneration();
private:
    std::shared_ptr<Cell> getCell(u32 row, u32 col);
    u32 getNumOfLiveNeighbours(u32 row, u32 col);
    u32 m_rows = 0;
    u32 m_cols = 0;
    std::vector<std::shared_ptr<Cell>> m_vec;
};
