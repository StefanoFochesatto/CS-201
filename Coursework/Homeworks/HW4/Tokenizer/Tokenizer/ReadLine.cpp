//
//  ReadLine.cpp
//  Tokenizer
//
//  Created by Stefano Fochesatto on 10/15/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "ReadLine.hpp"
#include <iostream>
#include <string>


bool ReadLine(std::string& user_input){
    
    if (user_input.size()){
        return true;
    }
    return false;
}
