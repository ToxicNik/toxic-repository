//
// Created by Toxic on 26.04.2018.
//

#ifndef TOXIC_REPOSITORY_ASSERTS_H
#define TOXIC_REPOSITORY_ASSERTS_H

#endif //TOXIC_REPOSITORY_ASSERTS_H

#include <stdbool.h>
#include "../src/map.h"

void ASSERT_INT_EQ(int a, int b);
void ASSERT_INT_NEQ(int a, int b);

void ASSERT_DOBULE_EQ(double a, double b);
void ASSERT_DOBULE_NEQ(double a, double b);

void ASSERT_BOOL_EQ(bool a, bool b);
void ASSERT_BOOL_NEQ(bool a, bool b);

void ASSERT_ARRAY_INT_EQ(struct Array a, struct Array b);
void ASSERT_ARRAY_INT_NEQ(struct Array a, struct Array b);

void ASSERT_STRING_EQ(char* a, char* b);
void ASSERT_STRING_NEQ(char* a, char* b);
