#include <iostream>
#include <thread>
#include "Matrix.hpp"

#ifndef UNIT_TEST
int main(int argc, char** argv)
#else
int ut_main(int argc, char** argv)
#endif
{
    Matrix matrix(10, 10);
   
    matrix.setCellState(1, 1, CELLSTATE_LIVE);
    matrix.setCellState(1, 3, CELLSTATE_LIVE);
    matrix.setCellState(1, 6, CELLSTATE_LIVE);
    matrix.setCellState(2, 2, CELLSTATE_LIVE);
    matrix.setCellState(2, 4, CELLSTATE_LIVE);
    matrix.setCellState(2, 5, CELLSTATE_LIVE);
    matrix.setCellState(2, 6, CELLSTATE_LIVE);
    matrix.setCellState(2, 8, CELLSTATE_LIVE);
    matrix.setCellState(3, 1, CELLSTATE_LIVE);
    matrix.setCellState(3, 2, CELLSTATE_LIVE);
    matrix.setCellState(3, 4, CELLSTATE_LIVE);
    matrix.setCellState(3, 6, CELLSTATE_LIVE);
    matrix.setCellState(3, 7, CELLSTATE_LIVE);
    matrix.setCellState(4, 2, CELLSTATE_LIVE);
    matrix.setCellState(4, 3, CELLSTATE_LIVE);
    matrix.setCellState(4, 5, CELLSTATE_LIVE);
    matrix.setCellState(4, 7, CELLSTATE_LIVE);
    matrix.setCellState(4, 8, CELLSTATE_LIVE);
    matrix.setCellState(5, 1, CELLSTATE_LIVE);
    matrix.setCellState(5, 3, CELLSTATE_LIVE);
    matrix.setCellState(5, 4, CELLSTATE_LIVE);
    matrix.setCellState(5, 6, CELLSTATE_LIVE);
    matrix.setCellState(5, 7, CELLSTATE_LIVE);
    matrix.setCellState(6, 1, CELLSTATE_LIVE);
    matrix.setCellState(6, 2, CELLSTATE_LIVE);
    matrix.setCellState(6, 4, CELLSTATE_LIVE);
    matrix.setCellState(6, 5, CELLSTATE_LIVE);
    matrix.setCellState(6, 7, CELLSTATE_LIVE);
    matrix.setCellState(6, 8, CELLSTATE_LIVE);
    matrix.setCellState(7, 1, CELLSTATE_LIVE);
    matrix.setCellState(7, 2, CELLSTATE_LIVE);
    matrix.setCellState(7, 5, CELLSTATE_LIVE);
    matrix.setCellState(7, 7, CELLSTATE_LIVE);
    matrix.setCellState(8, 1, CELLSTATE_LIVE);
    matrix.setCellState(8, 2, CELLSTATE_LIVE);
    matrix.setCellState(8, 4, CELLSTATE_LIVE);
    matrix.setCellState(8, 6, CELLSTATE_LIVE);
    matrix.setCellState(8, 7, CELLSTATE_LIVE);

    while(matrix.getNumOfLiveCells())
    {
        matrix.display();
	std::cout << "--------------------" << std::endl;
	matrix.nextGeneration();
	using namespace std::chrono_literals;
	std::this_thread::sleep_for(1s);
    }

    return 0;
}

