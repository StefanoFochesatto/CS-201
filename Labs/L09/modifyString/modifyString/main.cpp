//
//  main.cpp
//  modifyString
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <string>
#include "modifyString.hpp"

int main(int argc, const char * argv[]) {
    
    std::string referencedString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, referencedString);
    int n;
    std::cin >> n;
    
    int totalChar = modifyString(referencedString, n);
    std::cout << referencedString;
    std::cout <<"Size of string: " << totalChar <<"\n";
    
    
    
    return 0;
}
