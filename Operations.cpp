//
// Created by Alex on 3/28/2022.
//
#include "Operations.h"
#include <iostream>
using namespace std;

void largestSquare(int &n, Square v[],Square &sqr){
    float maxDiag = 0.0;
    int i;
    for(i=0;i<n;i++)
    {
        if(v[i].diagonal()>maxDiag)
        {
            maxDiag=v[i].diagonal();
            sqr = v[i];
        }
    }
}

bool isSquare(float x, float y, float z, float w){
    if (abs(x-z)== abs(y-w))
        return true;
    return false;
}

void firstQuadrant(int &n, Square v[], Square rez[], int &j){
    j=0;
    for(int i=0;i<n;i++){
        if(v[i].get_x1()>0 && v[i].get_y1()>0 && v[i].get_x2()>0 && v[i].get_y2()>0)
            rez[j++] = v[i];
    }
}

void getLongestSequenceWithEqualsSquares(int &n,Square v[], int &a, int &b)
{
    a=0;
    b=0;
    int i, j, d= 0, max = 0;
    for(i = 0; i<n-1; i++){
        for(j = i+1; j < n; j++) {
            while (v[i] == v[j] && i + d < n && j + d < n)
                d++;
        }
        if(d>max)
        {
            max =d;
            a = i;
            b = i+d;
        }
    }
}
