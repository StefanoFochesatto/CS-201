//
//  binarySearch.hpp
//  BinarySearchVSSequentialSearch
//
//  Created by Stefano Fochesatto on 10/14/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef binarySearch_hpp
#define binarySearch_hpp


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


bool binarySearch(const vector<int> & keys, const vector<int> & Dataset,
                  int thekey, int & thevalue) ;
#endif /* binarySearch_hpp */
