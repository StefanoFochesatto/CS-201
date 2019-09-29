//
//  quadratic.cpp
//  quadratic
//
//  Created by Stefano Fochesatto on 9/28/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "quadratic.hpp"
#include <cmath>
#include <iostream>

void quadratic(double a, double b, double c){
    
    double discriminant = (b*b)-(4*a*c);
    
    
    if( discriminant == 0 ){
       
        std::cout << "Roots are real and the same." << std::endl;
        double solution = (-b + sqrt(discriminant)) / (2*a);
        std::cout << "x_[1] = x_[2] =" << solution << std::endl;
    }
    
    else if ( discriminant > 0 ){
        
        
          double solution_1 = (-b + sqrt(discriminant)) / (2*a);
          double solution_2 = (-b - sqrt(discriminant)) / (2*a);
          std::cout << "Roots are real and different." << std::endl;
          std::cout << "x_[1] = " << solution_1 << std::endl;
          std::cout << "x_[2] = " << solution_2 << std::endl;
    }
    
    else if (discriminant < 0){
               double realsolution = -b/(2*a);
               double imaginarysolution =sqrt(-discriminant)/(2*a);
               std::cout << "Roots are complex and different."  << std::endl;
               std::cout << "x_[1] = " << realsolution << "+" << imaginarysolution << "i" << std::endl;
               std::cout << "x_[2] = " << realsolution << "-" << imaginarysolution << "i" << std::endl;
        
    }
    
}
