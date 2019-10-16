//
//  main.cpp
//  Tokenizer
//
//  Created by Stefano Fochesatto on 10/15/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <string>
#include "ReadLine.hpp"



int main(int argc, const char * argv[]) {

    std::cout << "Please enter a string" << std::endl;
    std::string user_input;
    std::getline(std::cin, user_input);
    
    std::cout << ReadLine(user_input);
    
    
    
    
    
    
    
    return 0;
}
