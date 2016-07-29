#include "gtest/gtest.h"
#include "../Matrix.hpp"

TEST(MatrixTestSuite, MatrixInitializedWithDeadCells)
{
    Matrix matrix(3, 3);
    auto l_cell1 = matrix.getCell(2, 2);
    auto l_cell2 = matrix.getCell(0, 0);
    auto l_cell3 = matrix.getCell(1, 2);
    auto l_cell4 = matrix.getCell(1, 1);
    ASSERT_EQ(CELLSTATE_DEAD, l_cell1->getState());
    ASSERT_EQ(CELLSTATE_DEAD, l_cell2->getState());
    ASSERT_EQ(CELLSTATE_DEAD, l_cell3->getState());
    ASSERT_EQ(CELLSTATE_DEAD, l_cell4->getState());

    l_cell4->setState(CELLSTATE_LIVE);
    ASSERT_EQ(CELLSTATE_LIVE, l_cell4->getState());
}
