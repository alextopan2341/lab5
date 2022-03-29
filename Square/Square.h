//
// Created by Alex on 3/23/2022.
//

#ifndef LAB5_SQUARE_H
#define LAB5_SQUARE_H
#include <iostream>
class Square{
private: float x1,y1,x2,y2;
public:

    /**
     * square constructor
     * @param i
     */
    Square();

    /**
     * copy-constructor
     */
    Square(const Square& sqr);

    /**
     * sets the coordinates of the square
     * @param a
     * @param b
     * @param c
     * @param d
     */
    void setCoordinates(float a, float b, float c, float d);

    /**
     * gets the coordinate for the abscissa for bottom-left point
     * @return
     */
    float get_x1();

    /**
     * gets the coordinate for the ordinate for bottom-left point
     * @return
     */
    float get_y1();

    /**
     * gets the coordinate for the abscissa for top-right point
     * @return
     */
    float get_x2();

    /**
     * gets the coordinate for the ordinate for top-right point
     * @return
     */
    float get_y2();

     Square(float x1, float y1, float x2, float y2);

     /**
      * creates the coordinates of the diagonal of the square
      */

     float diagonal();

    Square& operator=(const Square& sqr);
    bool operator==(const Square& sqr);

    friend std::ostream& operator<<(std::ostream &os ,const Square& sqr);
};

#endif //LAB5_SQUARE_H
