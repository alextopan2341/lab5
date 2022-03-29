//
// Created by Alex on 3/23/2022.
//

#include "Square.h"
#include <iostream>
#include <cmath>
using namespace std;
Square::Square(){
    this-> x1 = 0.0;
    this-> y1 = 0.0;
    this-> x2 = 0.0;
    this-> y2 = 0.0;

}
Square::Square(const Square &sqr) {
    this->x1 =sqr.x1;
    this->y1 =sqr.y1;
    this->x2 =sqr.x2;
    this->y2 =sqr.y2;
}

Square::Square(float x1, float y1, float x2, float y2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

float Square::diagonal() {
    return sqrt((pow(x2-x1,2) + pow(y2-y1,2)));
}

std::ostream &operator<<(ostream &os, const Square &sqr) {
    os<<sqr.x1<<" "<<sqr.y1<<" "<<sqr.x2<<" "<<sqr.y2;
    return os;
}

void Square::setCoordinates(float a, float b, float c, float d) {
    this->x1 = a;
    this->y1 = b;
    this->x2 = c;
    this->y2 = d;
}

Square &Square::operator=(const Square &sqr) {
    this->x1 = sqr.x1;
    this->y1 = sqr.y1;
    this->x2 = sqr.x2;
    this->y2 = sqr.y2;
    return *this;
}

bool Square::operator==(const Square &sqr) {
    return (this->x1 == sqr.x1) && (this->y1 == sqr.y1) && (this->x2 == sqr.x2) && (this->y2 == sqr.y2);
}

float Square::get_x1() {
        return this->x1;
}

float Square::get_y1() {
    return this->y1;
}

float Square::get_x2() {
    return this-> x2;
}

float Square::get_y2() {
    return this->y2;
}
