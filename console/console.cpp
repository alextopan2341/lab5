//
// Created by Alex on 3/22/2022.
//

#include "console.h"
#include "../Square/Square.h"
#include "../Operations/Operations.h"
#include <iostream>
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
                //cout << v[i] << endl;
        }
        else{
            cout<<"That cannot be a square! Try again!"<<endl;
            i--;
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

void Options(){
    cout<< endl << "c.Read the coordinates of the diagonal of the square."<< endl;
    cout<< "a.Print the list of squares."<< endl;
    cout<< "1.Largest square."<< endl;
    cout<< "2.Identification of the squares located completely in the first quadrant of the geometric circle."<<endl;
    cout<< "3.Identification of the largest sequence of equals squares."<< endl;
    cout<< "x.Close app."<< endl;
}