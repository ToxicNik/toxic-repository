//
// Created by Admin on 23.04.2018.
//
#include <stdio.h>
#include "Task1.h"
#include "Tests/MapTest.h"

void main(){
    int num = 111;
    //scanf("%d", &num);

    if (IsNumberSymmetrical(num))
        printf("%s\n", "Your number is symmetrical");
    else
        printf("%s\n", "Your number is asymmetrical");
    MapTest();
}


