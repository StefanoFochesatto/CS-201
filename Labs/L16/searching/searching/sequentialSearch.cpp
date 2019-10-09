//
//  sequentialSearch.cpp
//  searching
//
//  Created by Stefano Fochesatto on 10/9/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "sequentialSearch.hpp"
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


bool sequentialSearch(vector<int> keys, vector<string> values, int thekey, string & thevalue){
    int bounds = keys[(int)keys.size()];
   
    for (int i = 0 ; i < bounds ; i++){
           int start = keys[i];
        if(start==thekey){
               return true;
           } else {
               start++;
           }
    }
       //no match found
    return false;
}
