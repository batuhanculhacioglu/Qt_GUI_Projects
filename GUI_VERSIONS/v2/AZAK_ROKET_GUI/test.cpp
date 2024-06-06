#include "test.h"

test::test()
{
    test_x = 0;
    test_y = 0;
}

void test::getTestValues()
{
    test_x = 15.9;
    test_y = 6.5;
}

test test::returnTest()
{
    getTestValues();
    return test();
}
