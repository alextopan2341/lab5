//
// Created by Alex on 3/23/2022.
//

#ifndef LAB5_SQUARE_H
#define LAB5_SQUARE_H
#include <iostream>
class Square{
private: float x1,y1,x2,y2;
public:

    Square();
    /**
     * square constructor
     * @param i
     */

    Square(const Square& sqr);
    /**
     * copy-constructor
     */

    void setCoordinates(float a, float b, float c, float d);

    float get_x1();
    float get_y1();
    float get_x2();
    float get_y2();
     Square(float x1, float y1, float x2, float y2);
     /**
      * creates the coordinates of the diagonal of the square
      */

    Square& operator=(const Square& sqr);
    bool operator==(const Square& sqr);
    float diagonal();
    friend std::ostream& operator<<(std::ostream &os ,const Square& sqr);
};

#endif //LAB5_SQUARE_H
