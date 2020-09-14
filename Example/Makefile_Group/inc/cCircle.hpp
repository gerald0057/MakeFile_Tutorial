
/**
 * class example, class-rectangle
*/

#ifndef __CCIRCLE_HPP
#define __CCIRCLE_HPP

class cCircle {

public:
    int r;
    cCircle(int);
    cCircle();
    double area() { return (3.14 * r * r); }
};

#endif /* __CCIRCLE_HPP */