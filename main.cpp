#include <iostream>
#include "Matrix.hpp"

#ifndef UNIT_TEST
int main(int argc, char** argv)
#else
int ut_main(int argc, char** argv)
#endif
{
    unsigned int rows = 10, cols = 20;
    Matrix matrix(rows, cols);
    matrix.setCellState(1, 2, CELLSTATE_LIVE);
    matrix.setCellState(0, 3, CELLSTATE_LIVE);

    unsigned int row = 0, col = 0;
    for(row = 0; row < rows; row ++)
    {
        for(col = 0; col < cols; col ++)
        {
            std::cout << matrix.getCellState(row, col) << " "; 
	}
	std::cout << std::endl;
    }

    return 0;
}
