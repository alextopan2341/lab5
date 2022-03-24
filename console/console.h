//
// Created by Alex on 3/22/2022.
//

#ifndef LAB5_CONSOLE_H
#define LAB5_CONSOLE_H

#include "../Square/Square.h"

void Options();
void readVector(int &n, Square v[]);
void printVector(int &n,Square v[]);
void largestSquare(int &n, Square v[]);
bool isSquare(float x, float y, float z, float w);
void firstQuadrant(int &n, Square v[], Square rez[], int &j);
#endif //LAB5_CONSOLE_H
