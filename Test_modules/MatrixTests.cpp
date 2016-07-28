#include "gtest/gtest.h"
#include "../Cell.hpp"

TEST(MatrixTestSuite, OneDeadCellWithThreeLiveNeighboursNextStateShouldBeLive)
{
    Cell cell(CELLSTATE_DEAD);
    
    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(2));
    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(4));
    ASSERT_EQ(CELLSTATE_LIVE, cell.nextState(3));

}

TEST(MatrixTestSuite, OneLiveCellWithLessThanTwoLiveNeighboursNextStateShouldBeDead)
{
    Cell cell(CELLSTATE_LIVE);

    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(1));
}

TEST(MatrixTestSuite, OneLiveCellWithMoreThanThreeLiveNeighboursNextStateShouldBeDead)
{
    Cell cell(CELLSTATE_LIVE);

    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(4));
}
