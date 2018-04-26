//
// Created by Admin on 23.04.2018.
//

#ifndef TOXIC_REPOSITORY_MAP_H
#define TOXIC_REPOSITORY_MAP_H

#endif //TOXIC_REPOSITORY_MAP_H


struct Array{
    int* data;
    int length;
};

void IncreaseOn3(int* array);
void map (struct Array* array, void (*f) (int*));