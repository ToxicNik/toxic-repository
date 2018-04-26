//
// Created by Admin on 23.04.2018.
//

#include <malloc.h>
#include <stdio.h>
#include "mapTest.h"
void MapTest(){
    struct Array array;
    array.length = 10;
    array.data = (int*)malloc(sizeof(int)*10);
    for (int i = 0; i < 10; i++)
        array.data[i] = i;
    void (*Plus3)(int*) = IncreaseOn3;
    map(&array, Plus3);

    for (int i = 0; i<10; i++)
        printf("%d%s", array.data[i], " ");

}