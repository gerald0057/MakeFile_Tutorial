
#include <iostream>

#include "cRectangle.hpp"
#include "cCircle.hpp"

int main(void) {

    cRectangle rect(2, 3);

    ::std::cout << rect.area() << ::std::endl;

    cCircle circle(4);

    ::std::cout << circle.area() << ::std::endl;

    return 0;
}