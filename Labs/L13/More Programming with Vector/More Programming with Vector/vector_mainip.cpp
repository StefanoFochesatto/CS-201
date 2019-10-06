//
//  vector_mainip.cpp
//  More Programming with Vector
//
//  Created by Stefano Fochesatto on 10/2/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "vector_manip.hpp"
#include <iostream>
#include <string>
#include <vector>



void firstLetterChange(std::vector<std::string> & words, const char & c){
    
    for (auto & word : words){
        word[0] = c;
    }

    for (auto i : words){
         std::cout << i << " ";
    }

    
    
}
