//
//  Header.h
//  Shapes
//
//  Created by Brendan Reilly on 6/24/24.
//

#pragma once
#include "shape.h"

class Square : public Shape {
    
public:
    Square(double side);
    ~Square();
    void calcArea() override;
    void calcPerimeter() override;
    
private:
    double m_side;
    
};
