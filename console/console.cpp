//
// Created by Alex on 3/22/2022.
//

#include "console.h"
#include "../Square/Square.h"
#include <iostream>
#include <cmath>
using namespace std;

void readVector(int &n, Square v[]){
    float x,y,z,w;
    int i;
    cin>>n;
    for(i=0; i<n;i++)
    {
        cout<<"Give the coordinates bottom-left: ";
        cin>>x>>y;
        cout<<"Give the coordinates top-right:";
        cin>>z>>w;

        if(isSquare(x,y,z,w)) {
                Square sqr(x, y, z, w);
                v[i] = sqr;
                cout << v[i] << endl;
        }
    }

}

void printVector(int &n,Square v[]){
    for(int i=0;i<n;i++)
    {
        cout<<"Square:"<<i<<endl;
        cout<<v[i]<<endl;
    }
}

void largestSquare(int &n, Square v[]){
    float maxDiag = 0.0;
    int i;
    Square sqr;
    for(i=0;i<n;i++)
    {
        if(v[i].diagonal()>maxDiag)
        {
            maxDiag=v[i].diagonal();
            sqr = v[i];
        }
    }
    cout<<sqr;
}

bool isSquare(float x, float y, float z, float w){
    if (abs(x-z)== abs(y-w))
        return true;
    return false;
}

void firstQuadrant(int &n, Square v[], Square rez[], int &j){
    j=0;
    for(int i=0;i<n;i++)
        if(v[i].get_x1()>0 && v[i].get_y1()>0 && v[i].get_x2()>0 && v[i].get_y2()>0)
            rez[j++] = v[i];
}

void Options(){
    cout<< endl << "c.Read the coordinates of the diagonal of the square."<< endl;
    cout<< "a.Print the list of squares."<< endl;
    cout<< "1.Largest square."<< endl;
    cout<< "2.Identification of the squares located completely in the first quadrant of the geometric circle."<<endl;
    cout<< "3.Identification of the largest sequence of equals squares."<< endl;
    cout<< "x.Close app."<< endl;
}