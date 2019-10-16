//
//  tokenize.cpp
//  Tokenizer
//
//  Created by Stefano Fochesatto on 10/15/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "tokenize.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> tokenize(std::string& user_input ){
    
    
    std::vector<std::string> tokens;
    std::stringstream user_stream(user_input);
    std::string place_holder;
    
    
    while(std::getline(user_stream, place_holder, ' '))
      {
          tokens.push_back(place_holder);
      }
    return tokens;
}

