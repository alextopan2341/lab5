//
// Created by Alex on 3/29/2022.
//

#include "Tests.h"
#include <iostream>
#include "../Square/Square.h"
#include "../Operations/Operations.h"
#include <cassert>
#include <cmath>

void test_constructor() {
    Square square;
    assert(square.diagonal() == 0.0);
}

void test_setter() {
    Square square;
    square.setCoordinates(1, 4, 4, 1);
    assert(square.get_x1() == 1);
    assert(square.get_y1() == 4);
    assert(square.get_x2() == 4);
    assert(square.get_y2() == 1);

}


void test_largest_square() {
    Square square1(1, 4, 4, 1);
    Square square2(1, 3, 3, 1);
    Square square3(2, 5, 5, 2);
    Square square4(1, 6, 6, 1);
    float max = 0.0;
    Square sqr;
    int n = 4;
    Square v[4] = {square1, square2, square3, square4};
    largestSquare(n,v,sqr);
    //assert(max == 5);
}

void test_first_quadrant() {
    Square square1(-1, -4, -4, -1);
    Square square2(1, 3, 3, 1);
    Square square3(-2, -5, -5, -2);
    Square square4(1, 6, 6, 1);
    int i = 0, n = 4,j;
    Square v[4] = {square1, square2, square3, square4};
    Square v2[2];
    firstQuadrant(n,v,v2,j);
    assert(v2[0] == square2);
    assert(v2[1] == square4);
}

void test_largest_sequence() {
    Square square1(1, 4, 4, 1);
    Square square2(1, 3, 3, 1);
    Square square3(2, 5, 5, 2);
    Square square4(2, 5, 5, 2);
    int i0 = 0, j0 = 0, n = 4;
    Square v[4] = {square1, square2, square3, square4};
    getLongestSequenceWithEqualsSquares(n, v,i0,j0);
    assert(i0 == 2);
    assert(j0 == 3);
}

void tests() {
    test_constructor();
    test_setter();
    test_largest_square();
    test_first_quadrant();
    test_largest_sequence();
}