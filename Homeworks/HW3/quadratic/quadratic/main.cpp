//
//  main.cpp
//  quadratic
//
//  Created by Stefano Fochesatto on 9/28/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include "quadratic.hpp"


int main(int argc, const char * argv[]) {
    
    while (true){
    
    double a,b,c;
    std::cout << "Please enter the coeffecients to the quadratic funciton of the form ax^2+bx+c = 0  \n";
    std::cout << "a: ";
    std::cin >> a;
    
    std::cout << "b: ";
    std::cin >> b;
    
    std::cout << "c: ";
    std::cin >> c;
        if ((a == 0)&&(b == 0)&&(c == 0))
        {
            break;
        }
        
    quadratic(a,b,c);
        
    }
    
    
    
    
    
    return 0;
}
