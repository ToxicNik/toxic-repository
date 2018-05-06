//
// Created by Toxic on 26.04.2018.
//

#include <stdio.h>
#include <mem.h>
#include "ASSERTS.h"

void PrintResult(bool result)
{
    if (result)
        printf("%s\n", "TEST PASSED");
    else
        printf("%s\n", "TEST FAILED");

}

void ASSERT_INT_EQ(int a, int b){
    PrintResult(a==b);
}

void ASSERT_INT_NEQ(int a, int b){
    PrintResult(a!=b);
}

void ASSERT_DOBULE_EQ(double a, double b){
    PrintResult(a==b);
}

void ASSERT_DOBULE_NEQ(double a, double b){
    PrintResult(a!=b);
}

void ASSERT_BOOL_EQ(bool a, bool b){
    PrintResult(a==b);
}

void ASSERT_BOOL_NEQ(bool a, bool b){
    PrintResult(a!=b);
}

void ASSERT_ARRAY_INT_EQ(struct Array a, struct Array b){
    bool result = true;
    int lengthA = a.length;
    int lengthB = b.length;
    if (lengthA != lengthB)
    {
        result = false;
        PrintResult(result);
        return;
    }

    for(int i = 0; i<lengthA; i++)
    {
        if (a.data[i] != b.data[i])
            result = false;
    }
    PrintResult(result);
}

void ASSERT_ARRAY_INT_NEQ(struct Array a, struct Array b){
    bool result = true;
    int lengthA = a.length;
    int lengthB = b.length;
    if (lengthA != lengthB)
    {
        result = false;
        PrintResult(!result);
        return;
    }

    for(int i = 0; i<lengthA; i++)
    {
        if (a.data[i] != b.data[i])
            result = false;
    }
    PrintResult(!result);

}

void ASSERT_STRING_EQ(char* a, char* b){
    bool result = true;
    int len1 = strlen(a);
    int len2 = strlen(b);
    if (len1 != len2)
    {
        result = false;
        PrintResult(result);
        return;
    }

    for(int i = 0; i<len1; i++)
    {
        if (a[i] != b[i])
            result = false;
    }

    PrintResult(result);
}
void ASSERT_STRING_NEQ(char* a, char* b){
    bool result = true;
    int len1 = strlen(a);
    int len2 = strlen(b);
    if (len1 != len2)
    {
        result = false;
        PrintResult(!result);
        return;
    }

    for(int i = 0; i<len1; i++)
    {
        if (a[i] != b[i])
            result = false;
    }

    PrintResult(!result);
}
