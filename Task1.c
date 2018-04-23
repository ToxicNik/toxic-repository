//
// Created by Admin on 23.04.2018.
//

#include <stdbool.h>
#include <malloc.h>
#include <stdio.h>
#include <mem.h>
#include "Task1.h"

bool IsNumberSymmetrical(int number){
    bool buf = 1;
    char* str = malloc(sizeof(char)*21);
    sprintf(str, "%d", number);
    int length = strlen(str);
    for (int i = 0; i < length/2; i++){
        if (str[i] != str[length - 1 - i])
            buf = 0;
    }
    free(str);
    return buf;
}