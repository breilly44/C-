//
//  square.cpp
//  Shapes
//
//  Created by Brendan Reilly on 6/24/24.
//

#include <iostream>
#include "square.h"

Square::Square(double side)
:m_side{side}, Shape{0, 0} {
    
}

Square::~Square() {
    std::cout << "Square destroyed!" << std::endl;
}

void Square::calcArea() {
    double area {m_side * m_side};
    Shape::setArea(area);
}

void Square::calcPerimeter() {
    double perimeter {4 * m_side};
    Shape::setPerimeter(perimeter);
}
