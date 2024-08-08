//
//  triangle.cpp
//  Shapes
//
//  Created by Brendan Reilly on 6/26/24.
//

#include <iostream>
#include "triangle.h"
#include <math.h>

Triangle::Triangle(double sideOne, double sideTwo, double sideThree)
:m_sideOne{sideOne}, m_sideTwo{sideTwo}, m_sideThree{sideThree}, Shape{0, 0} {
    
}

Triangle::~Triangle() {
    std::cout << "Triangle destroyed!" << std::endl;
}

void Triangle::calcArea() {
    double s = (m_sideOne + m_sideTwo + m_sideThree)/2;
    double sqrtVar = s*(s - m_sideOne)*(s - m_sideTwo)*(s - m_sideThree);
    double area = std::sqrt(sqrtVar);
    Shape::setArea(area);
}

void Triangle::calcPerimeter() {
    double perimeter {m_sideOne + m_sideTwo + m_sideThree};
    Shape::setPerimeter(perimeter);
}
