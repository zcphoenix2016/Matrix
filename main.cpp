#include <iostream>
#include "Matrix.hpp"

#ifndef UNIT_TEST
int main(int argc, char** argv)
#else
int ut_main(int argc, char** argv)
#endif
{
    Matrix matrix(5, 5);
   
    matrix.setCellState(1, 2, CELLSTATE_LIVE);
    matrix.setCellState(2, 3, CELLSTATE_LIVE);
    matrix.setCellState(3, 1, CELLSTATE_LIVE);

    return 0;
}
