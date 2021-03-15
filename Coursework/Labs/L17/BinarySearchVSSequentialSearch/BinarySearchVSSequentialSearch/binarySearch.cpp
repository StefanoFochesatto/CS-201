//
//  binarySearch.cpp
//  BinarySearchVSSequentialSearch
//
//  Created by Stefano Fochesatto on 10/14/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "binarySearch.hpp"

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


#include <stdio.h>

bool binarySearch(const vector<int> & keys, const vector<int> & Dataset,
        int thekey, int & thevalue) {

    int first = 0;  // Index of first item in range
    int last = int(keys.size());
    // 1 + index of last item in range
    while (true) {
        // Compute size of range
        int size = last - first;

        // Special case: size 0
        if (size == 0) {
            return false;
        }
        // Special case: size 1
        if (size == 1) {
            if (keys[first] == thekey) {
                thevalue = keys[first];
                return true;
            }
            return false;
        }

        // General case - split range in half
        int middle = first + size / 2;
        if (thekey < keys[middle]) {
            last = middle;
        } else {
            first = middle;
        }
    }
}
