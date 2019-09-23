//
//  InputNames.hpp
//  names
//
//  Created by Stefano Fochesatto on 9/20/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef InputNames_hpp
#define InputNames_hpp
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
std::vector<std::string> InputNames(std::vector<std::string> names){
    for (int i = 0 ; i<10; i++){
    std::string name;
    std:: cout <<"Please enter a name: ";
    std::getline(std::cin, name);
    names.push_back(name);
    }
    return names;
    }
#endif /* InputNames_hpp */
