//
//  circle.cpp
//  Shapes
//
//  Created by Brendan Reilly on 6/24/24.
//

#include <iostream>
#include "circle.h"
#include <math.h>

Circle::Circle(double radius)
:m_radius{radius}, Shape{0, 0} {
    
}

Circle::~Circle() {
    std::cout << "Circle destroyed!" << std::endl;
}

void Circle::calcArea() {
    double area {M_PI * m_radius * m_radius};
    Shape::setArea(area);
}

void Circle::calcPerimeter() {
    double perimeter {2 * M_PI * m_radius};
    Shape::setPerimeter(perimeter);
}
