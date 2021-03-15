//
//  main.cpp
//  Functions
//  Calls the print sting length function
//  Created by Stefano Fochesatto on 9/16/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include "string_length.hpp"

int main(int argc, const char * argv[]) {
    std::cout<<"Please input a string:"<< std::endl;
    std::string a;
    std::cin >> a;
    printStringLength(a);
    
    
    return 0;
}
