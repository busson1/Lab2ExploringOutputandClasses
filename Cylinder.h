#ifndef CYLINDER_H
#define CYLINDER_H

class cylinder
{
public:
    // Constructor and Destructor
    cylinder();
    ~cylinder();
    
    //Setter
    void setRadius(double r);
    void setHeight(double h);
    
    //Getter
    double getRadius();
    double getHeight();
    double calculateVolume();
    double calculateSurfaceArea();
    
private:
    double radius;
    double height; 
    double pi = 3.14159;
};

#endif // !CYLINDER_H
