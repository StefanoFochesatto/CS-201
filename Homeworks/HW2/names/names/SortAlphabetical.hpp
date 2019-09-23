//
//  SortAlphabetical.hpp
//  names
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef SortAlphabetical_hpp
#define SortAlphabetical_hpp
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
std::vector<std::string> SortAlphibetical(std::vector<std::string> names){

    sort( names.begin(), names.end() );
    return names;
}

#endif /* SortAlphabetical_hpp */
