//
//  sequentialSearch.cpp
//  BinarySearchVSSequentialSearch
//
//  Created by Stefano Fochesatto on 10/14/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "sequentialSearch.hpp"

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





bool sequentialSearch(const vector<int> & keys, const vector<int> & Dataset,
        int thekey, int & thevalue) {
    for (int i = 0; i < int(keys.size()); ++i) {
        if (keys[i] == thekey) {
            thevalue = Dataset[i];
            return true;
        }
    }
    return false;
}
