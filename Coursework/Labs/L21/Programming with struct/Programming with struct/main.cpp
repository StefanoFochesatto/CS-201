//
//  main.cpp
//  Programming with struct
//
//  Created by Stefano Fochesatto on 10/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <string>
#include "truncstruct.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "Please input a string\n";
  
    std::string str;
    std::getline (std::cin,str);
    
    std::cout << "Please input an int\n";
   unsigned int truncate;
    std::cin >> truncate;
    
    StringInfo si = {str , truncate};
 
    StringInfo si2 = trunc(si);
    
    std::cout << si2.str;

    
    
    
    
    
    
    
    return 0;
}
