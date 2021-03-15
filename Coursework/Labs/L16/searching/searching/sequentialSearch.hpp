//
//  sequentialSearch.hpp
//  searching
//
//  Created by Stefano Fochesatto on 10/9/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef sequentialSearch_hpp
#define sequentialSearch_hpp

#include <stdio.h>

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

bool sequentialSearch(vector<int> keys, vector<string> values, int thekey, string & thevalue);
#endif /* sequentialSearch_hpp */
