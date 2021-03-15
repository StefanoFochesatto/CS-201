//
//  main.cpp
//  Using Boolean Values
//
//  Created by Stefano Fochesatto on 9/25/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include "isDiv3.hpp"
#include "isADivB.hpp"
#include <iomanip>



int main(int argc, const char * argv[]) {
    //for (int i = 0; i <= 40; i++ ){
    //std::cout << i << " is divsible by 3: "<<isDiv3(i);
      //  std::cout << "\n";
    //}
    std:: cout << " Please enter in a divisor and then divider integers: ";
    int a;
    int b;
    std:: cin >>  a;
    std:: cin >>  b;
    for (int i = 0; i <= a; i++ ){
        std::cout << i << " is divsible by " << b <<": "<< std::boolalpha << isADivB(i,b);
        std::cout << "\n";
    }
    
    
    
    
    
    return 0;
}
