#include "Cylinder.h"
#include <cmath>

cylinder::cylinder()
{
    radius = 0.0;
}

cylinder::~cylinder()
{
}

void cylinder::setRadius(double r)
{
    radius = r;
}

void cylinder::setHeight(double h)
{
    height = h;
}

double cylinder::getRadius()
{
    return radius;
}

double cylinder::getHeight()
{
    return height;
}

double cylinder::calculateVolume()
{
    return pi*pow(radius, 2)*height;
}

double cylinder::calculateSurfaceArea()
{
    return 2*pi*radius*height+2*pi*pow(radius, 2);
}
