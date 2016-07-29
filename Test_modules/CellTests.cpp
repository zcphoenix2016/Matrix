#include "gtest/gtest.h"
#include "../Cell.hpp"

TEST(CellTestSuite, OneDeadCellWithThreeLiveNeighboursNextStateShouldBeLive)
{
    Cell cell(CELLSTATE_DEAD);
    
    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(2));
    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(4));
    ASSERT_EQ(CELLSTATE_LIVE, cell.nextState(3));

}

TEST(CellTestSuite, OneLiveCellWithLessThanTwoLiveNeighboursNextStateShouldBeDead)
{
    Cell cell(CELLSTATE_LIVE);

    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(1));
}

TEST(CellTestSuite, OneLiveCellWithMoreThanThreeLiveNeighboursNextStateShouldBeDead)
{
    Cell cell(CELLSTATE_LIVE);

    ASSERT_EQ(CELLSTATE_DEAD, cell.nextState(4));
}

TEST(CellTestSuite, CellStateShouldBeSettedAndGetted)
{
    Cell cell;
    ASSERT_EQ(CELLSTATE_DEAD, cell.getState());

    cell.setState(CELLSTATE_LIVE);
    ASSERT_EQ(CELLSTATE_LIVE, cell.getState());    
}

