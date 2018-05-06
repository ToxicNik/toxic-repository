//
// Created by Admin on 23.04.2018.
//

#include <malloc.h>
#include <stdio.h>
//#include <time.h>
//#include <unistd.h>

#include "mapTest.h"

void MapTest_1(){ // similar arrays
//    clock_t start, end;
    struct Array array1, array2;
    array1.length = array2.length = 10;
    array1.data = (int*)malloc(sizeof(int)*10);
    array2.data = (int*)malloc(sizeof(int)*10);
    for (int i = 0; i < 10; i++) {
        array1.data[i] = i;
        array2.data[i] = i + 3;
    }
    void (*Plus3)(int*) = IncreaseOn3;
//    start = clock();
    map(&array1, Plus3);
//    sleep(5);
//    end = clock();
    ASSERT_ARRAY_INT_EQ(array1, array1);
//    printf("%s%f\n", "Required time is: ", ((double)end - (double)start)/((double) CLOCKS_PER_SEC) );
    ASSERT_ARRAY_INT_EQ(array1, array2);
    free(array1.data);
    free(array2.data);
}

void MapTest_2(){ // different lengths
    struct Array array1;
    struct Array array2;
    array1.length = 10;
    array2.length = 12;
    array1.data = (int*)malloc(sizeof(int)*10);
    array2.data = (int*)malloc(sizeof(int)*12);

    for (int i = 0; i < 10; i++) {
        array1.data[i] = i;
    }
    for (int i = 0; i < 12; i++) {
        array2.data[i] = i + 3;
    }

    void (*Plus3)(int*) = IncreaseOn3;
    map(&array1, Plus3);

    ASSERT_ARRAY_INT_NEQ(array1, array2);
    free(array1.data);
    free(array2.data);
}

void MapTest_3(){ // different values
    struct Array array1;
    struct Array array2;
    array1.length = 10;
    array2.length = 10;
    array1.data = (int*)malloc(sizeof(int)*10);
    array2.data = (int*)malloc(sizeof(int)*10);

    for (int i = 0; i < 10; i++) {
        array1.data[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        array2.data[i] = i + 4;
    }

    void (*Plus3)(int*) = IncreaseOn3;
    map(&array1, Plus3);

    ASSERT_ARRAY_INT_NEQ(array1, array2);
    free(array1.data);
    free(array2.data);
}