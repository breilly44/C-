//
//  shape.cpp
//  Shapes
//
//  Created by Brendan Reilly on 6/24/24.
//

#include "shape.h"
#include <iostream>

Shape::Shape(double area, double perimeter)
:m_area{area}, m_perimeter{perimeter} {
}

Shape::~Shape() {
    std::cout << "Shape destroyed!" << std::endl;
}

double Shape::getArea() {
    return m_area;
}

void Shape::setArea(double area) {
    Shape::m_area = area;
}

double Shape::getPerimeter() {
    return m_perimeter;
}

void Shape::setPerimeter(double perimeter) {
    Shape::m_perimeter = perimeter;
}

void Shape::calcArea() {
    m_area = 0;
}

void Shape::calcPerimeter() {
    m_perimeter = 0;
}
