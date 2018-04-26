//
// Created by Admin on 23.04.2018.
// Task T from 1st part from http://informatics.mccme.ru/mod/statements/view3.php?id=2296&chapterid=2956
//

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