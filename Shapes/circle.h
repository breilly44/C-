//
//  Header.h
//  Shapes
//
//  Created by Brendan Reilly on 6/24/24.
//

#pragma once
#include "shape.h"

class Circle : public Shape {
    
public:
    Circle(double radius);
    ~Circle();
    void calcArea() override;
    void calcPerimeter() override;
        
private:
    double m_radius;
    
};
