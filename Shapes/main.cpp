//
//  main.cpp
//  Shapes
//
//  Created by Brendan Reilly on 6/24/24.
//
#include <iostream>
#include "shape.h"
#include "square.h"
#include "circle.h"
#include "triangle.h"

int main() {
//    Shape myShape{0, 0};
//    std::cout << "The area of your shape is: " << myShape.getArea() << std::endl;
//    
//    Square mySquare{5.0};
//    mySquare.calcArea();
//    mySquare.calcPerimeter();
//    std::cout << "The area of your square is: " << mySquare.getArea() << std::endl;
//    std::cout << "The perimeter of your square is: " << mySquare.getPerimeter() << std::endl;
//    
//    Circle myCircle{7.0};
//    myCircle.calcArea();
//    myCircle.calcPerimeter();
//    std::cout << "The area of your circle is: " << myCircle.getArea() << std::endl;
//    std::cout << "The circumference of your circle is: " << myCircle.getPerimeter() << std::endl;
//    
//    Triangle myTriangle{4.0, 8.0};
//    myTriangle.calcArea();
//    std::cout << "The area of your triangle is: " << myTriangle.getArea() << std::endl;
    
    
    // Aim a base-class pointer at a base-class object and invoke base-class functionality
//    Shape shapeTwo{4, 0};
//    Shape* ptr {nullptr};
//    ptr = &shapeTwo;
//    std::cout << "access shape area with pointer: " << ptr->getArea() << std::endl;
    
    // Aim a derived-class pointer at a derived-class object and invoke derive-class functionatlity
//    Circle circleTwo{3};
//    Circle* pointer {nullptr};
//    pointer = &circleTwo;
//    pointer->calcArea();
//    std::cout << "calculated area through pointer: " << pointer->getArea() << std::endl;
    
    // Aim a base-class pointer at a derived-class object and show that the base-class functionality is available in the derived-class object
//    Square squareTwo{4};
//    Shape* pptr {nullptr};
//    pptr = &squareTwo;
//    squareTwo.calcArea();
//    std::cout << "area of derived object through base class pointer: " << pptr->getArea() << std::endl;
    
    // Aim derived-class pointers at base-class objects
    Circle circleYay {7};
    Shape* shapePtr{nullptr};
    shapePtr = &circleYay;
    shapePtr->calcArea();
    shapePtr->calcPerimeter();
    std::cout << "\nCircle with base class pointer" << std::endl;
    std::cout << "area: " << shapePtr->getArea() << ", perimeter: " << shapePtr->getPerimeter() << std::endl;
    
    
    Triangle triangle{6.0,7.0, 8.0};
    Shape* shapePtrTwo{nullptr};
    shapePtrTwo = &triangle;
    shapePtrTwo->calcArea();
    shapePtrTwo->calcPerimeter();
    std::cout << "\nTriangle with base class pointer" << std::endl;
    std::cout << "area: " << shapePtrTwo->getArea() << ", perimeter: " << shapePtrTwo->getPerimeter() << std::endl;
    
    Square square{5.0};
    Shape* shapePtrThree{nullptr};
    shapePtrThree = &square;
    shapePtrThree->calcArea();
    shapePtrThree->calcPerimeter();
    std::cout << "\nSquare with base class pointer" << std::endl;
    std::cout << "area: " << shapePtrThree->getArea() << ", perimeter: " << shapePtrThree->getPerimeter() << std::endl;
    
    
}
