#include "gtest/gtest.h"
#include "../Matrix.hpp"

TEST(MatrixTestSuite, MatrixInitializedWithDeadCells)
{
    Matrix matrix(3, 3);

    ASSERT_EQ(CELLSTATE_DEAD, matrix.getCellState(2, 2));
    ASSERT_EQ(CELLSTATE_DEAD, matrix.getCellState(0, 0));
    ASSERT_EQ(CELLSTATE_DEAD, matrix.getCellState(1, 2));
    ASSERT_EQ(CELLSTATE_DEAD, matrix.getCellState(1, 1));

    matrix.setCellState(1, 1, CELLSTATE_LIVE);
    ASSERT_EQ(CELLSTATE_LIVE, matrix.getCellState(1, 1));
}

TEST(MatrixTestSuite, CellsAtMatrixEdgeCouldBeSetLive)
{
    Matrix matrix(10, 20);

    matrix.setCellState(0, 8, CELLSTATE_LIVE);
    matrix.setCellState(8, 0, CELLSTATE_LIVE);

    ASSERT_EQ(CELLSTATE_DEAD, matrix.getCellState(0, 8));
    ASSERT_EQ(CELLSTATE_DEAD, matrix.getCellState(8, 0));
}	
