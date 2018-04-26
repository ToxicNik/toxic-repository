//
// Created by Admin on 23.04.2018.
//

#include "map.h"

void IncreaseOn3(int* array)
{
    array[0] += 3;
}

void map (struct Array* array, void (*f) (int*)){
    for (int i = 0; i < array->length; i++){
        f(array->data + i);
    }
}
