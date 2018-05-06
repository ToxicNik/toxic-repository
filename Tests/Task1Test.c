//
// Created by Toxic on 26.04.2018.
//


#include "Task1Test.h"
#include "ASSERTS.h"

void Task1Test_1 (){ // This test should accept sym number
    int num = 123454321;
    bool ans = IsNumberSymmetrical(num);
    bool expectedValue = true;
    ASSERT_BOOL_EQ(ans, expectedValue);
}


void Task1Test_2 (){ // This test should decline unsym number
    int num = 12345212;
    bool ans = IsNumberSymmetrical(num);
    bool expectedValue = false;
    ASSERT_BOOL_EQ(ans, expectedValue);
}