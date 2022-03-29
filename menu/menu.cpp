//
// Created by Alex on 3/22/2022.
//

#include "menu.h"
#include <iostream>
#include "../console/console.h"
#include "../Square/Square.h"
#include "../Operations/Operations.h"
using namespace std;
int runMenu(Square v[],Square rez[]){
    int ok = 1,l=0,n,j;
    Square sqr;
    int startpoz,seqlen,a,b;
    char option;
    while(ok == 1)
    {
        Options();

        cout<<"Give the option you want: ";
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
                largestSquare(n,v,sqr);
                cout<<sqr;
                break;
            case '2':
                firstQuadrant(n,v,rez,j);
                printVector(j,rez);
                break;
            case '3':
                getLongestSequenceWithEqualsSquares(n,v,a,b);
                for (int i = a; i <= b; i++)
                    cout << v[i] << endl;
                break;
            case 'x':
                ok=0;
                break;
            default:
                cout<<"Wrong option! Try again!";
        }
    }
}