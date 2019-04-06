//
//  AntGPS.hpp
//  Langston's Ant
//
//  Created by Richard Joseph on 4/5/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#ifndef AntGPS_hpp
#define AntGPS_hpp

#include <stdio.h>

class AntGPS
{
private:
    int currentX;
    int currentY;
    int currentDirection;
    
public:
    void moveX(int);
    void moveY(int);
    void rotateAnt(int);
};

#endif /* AntGPS_hpp */
