//
//  modifyString.cpp
//  modifyString
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include  "modifyString.hpp"


int modifyString(std::string & referencedString, int n){
    
    for (int i = 1; i <= n; i++)
    {
         referencedString += "#";
    }
    return  (int)referencedString.size();
    
}
