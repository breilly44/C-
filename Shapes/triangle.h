//
//  triangle.h
//  Shapes
//
//  Created by Brendan Reilly on 6/26/24.
//


#pragma once
#include "shape.h"

class Triangle : public Shape {
    
public:
    Triangle(double sideOne, double sideTwo, double sideThree);
    ~Triangle();
    void calcArea() override;
    void calcPerimeter() override;
    
private:
    double m_sideOne;
    double m_sideTwo;
    double m_sideThree;
};
