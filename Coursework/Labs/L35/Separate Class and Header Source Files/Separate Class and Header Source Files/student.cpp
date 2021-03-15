//
//  student.cpp
//  Separate Class and Header Source Files
//
//  Created by Stefano Fochesatto on 12/2/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//


#include <iostream>
#include "student.hpp"

void Student::printInfo() const
{
   std::cout << "Name: " << name_ << "  ID: " << id_ << std::endl;
}
