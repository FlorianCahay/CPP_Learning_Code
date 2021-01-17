#include "Rectangle.h"

#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << rect << std::endl;

    rect.scale(3);
    std::cout << rect << std::endl;

    Rectangle square(2.5f);

    Rectangle::set_default_size(3.f);

    Rectangle s1;
    Rectangle s2;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    Rectangle::set_default_size(5.f);

    Rectangle s3;
    Rectangle s4;
    Rectangle s5;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;
    std::cout << s5 << std::endl;

    // At this point, size of s1 and s2 should be 3.f, and size fo s3, s4 and s5 should be 5.f. 
    Rectangle r = s1;

    return 0;
}
