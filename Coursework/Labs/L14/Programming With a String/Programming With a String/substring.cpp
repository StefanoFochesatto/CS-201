//
//  substring.cpp
//  Programming With a String
//
//  Created by Stefano Fochesatto on 10/4/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "substring.hpp"

#include <iostream>
#include <string>


void subtring(std::string User_Input){
    
    
    for (int i = 0; i < (User_Input.length()); i++){
        int j = (int)User_Input.length() - i;
        std::string currentstring = User_Input.substr(0,j);
        std::cout << currentstring << "\n";
    }
    
    
    
    
    
}
