#include "gmock/gmock.h"

#ifndef UNIT_TEST
int main(int argc, char** argv)
#else
int ut_main(int argc, char** argv)
#endif
{
    ::testing::InitGoogleMock(&argc, argv);

    return RUN_ALL_TESTS();
}
