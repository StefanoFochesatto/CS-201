//
//  DoesNameExist.hpp
//  names
//
//  Created by Stefano Fochesatto on 9/22/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef DoesNameExist_hpp
#define DoesNameExist_hpp
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

bool DoesNameExist(const std::string nameToFind,std::vector<std::string> names){
    int i = 0;
    while (i <= 9){
        std::string cName = names.at(i);
        if (cName == nameToFind){
            return true;
        }
        
        i++;
    }
    return false;
}
#endif /* DoesNameExist_hpp */
