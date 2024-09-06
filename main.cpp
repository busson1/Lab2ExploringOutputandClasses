/*
 Jake Busson
 Computer Science
 Due: Sept. 17, 2024
 Lab Name:Lab 2 Exploring Output and Classes
 Lab Description: In Lab 2 I created a cylinder that stored the radius and height using
 the Class. This calculated the volume and surface area with the input of the size of
 radius and the height of a cylinder.
 */

#include <iostream>
#include "Cylinder.h"

int main()
{
    cylinder s;
    s.setRadius(2);
    s.setHeight(8);
    std::cout << "The volume of the cylinder is " << s.calculateVolume() <<std::endl;
    std::cout << "The surface area of the cylinder is " << s.calculateSurfaceArea() <<std::endl;
    return 0;
}
