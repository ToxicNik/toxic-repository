//
// Created by Admin on 23.04.2018.
//
#include <stdio.h>
#include "Task1.h"

void main(){
    int num;
    scanf("%d", &num);
    if (IsNumberSymmetrical(num))
        printf("%s", "Your number is symmetrical");
    else
        printf("%s", "Your number is asymmetrical");
}


