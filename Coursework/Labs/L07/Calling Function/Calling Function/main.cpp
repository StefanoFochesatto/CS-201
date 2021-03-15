//
//  main.cpp
//  Calling Function
//
//  Created by Stefano Fochesatto on 9/18/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include "intio.hpp"
#include <vector>
#include <numeric>
int main(int argc, const char * argv[]) {
    std::cout << "Type an integer: ";
    std::vector<int> v;
    int j = 1;
   do {
        j = getInt();
        v.push_back(j);
   } while (j != 0);
    int i = accumulate(v.begin(),v.end(),0);
    putInt(i, 10);

    
    return 0;
}

//int num1 = getInt();
//int num2 = getInt();
//int num3 = getInt();

//putInt(num1, 10);
//std::cout << std::endl;
//putInt(num2, 10);
//std::cout << std::endl;
//putInt(num3, 10);
//std::cout << std::endl;
