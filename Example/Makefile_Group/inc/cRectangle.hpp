
/**
 * class example, class-rectangle
*/

#ifndef __CRECTANGLE_HPP
#define __CRECTANGLE_HPP

class cRectangle {

public:
    int width, height;
    cRectangle(int, int);
    cRectangle();
    int area() { return (width * height); }
};

#endif /* __CRECTANGLE_HPP */