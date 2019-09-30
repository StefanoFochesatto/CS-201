//
//  userInput.cpp
//  Programming with a vector
//
//  Created by Stefano Fochesatto on 9/30/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "userInput.hpp"
#include <iostream>
#include <string>
#include <vector>





void getUserStrings(std::vector<std::string> & words){
    
    
    
    while (true){
        std::string current_word;
        std::getline(std::cin,current_word);
        
        if (current_word == "end"){
            break;
        }
        words.push_back(current_word);
    }
    
}



bool hasChar(const std::string & str, const char & c){
    
    
    
    
    return false;
}
