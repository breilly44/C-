//
//  shape.h
//  Shapes
//
//  Created by Brendan Reilly on 6/24/24.
//

#pragma once

class Shape {
public:
    Shape(double area, double perimeter);
    ~Shape();
    double getArea();
    double getPerimeter();
    void setArea(double area);
    void setPerimeter(double perimeter);
    virtual void calcArea();
    virtual void calcPerimeter();
    
    bool operator==(Shape& otherShape);
private:
    double m_area;
    double m_perimeter;
};
