//
// Created by Alex on 3/22/2022.
//

#include "menu.h"
#include <iostream>
#include "../console/console.h"
#include "../Square/Square.h"
using namespace std;
int runMenu(Square v[],Square rez[]){
    int ok = 1,l=0,n,j;
    int startpoz,seqlen,a,b;
    char option;
    while(ok == 1)
    {
        Options();

        cout<<"Dati optiunea: ";
        cin >> option;
        switch(option)
        {
            case 'c':
                cout<<"Numbers of squares: ";
                readVector(n, v);
                break;
            case 'a':
                printVector(n,v);
                break;
            case '1':
                largestSquare(n,v);
                break;
            case '2':
                firstQuadrant(n,v,rez,j);
                printVector(j,rez);
                break;
            case 'x':
                ok=0;
                break;
            default:
                cout<<"Wrong option! Try again!";
        }
    }
    delete[] v;
}