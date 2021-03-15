//
//  main.cpp
//  collatz
//
//  Created by Stefano Fochesatto on 9/28/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <vector>
#include "collatz.hpp"


int main(int argc, const char * argv[]) {
    std::vector<int> collatz_vect;
   
    
    std::cout << "Please enter an int: ";
    int collatz_start;
    std::cin >> collatz_start;
    collatz_vect.push_back(collatz_start);
    while (true){
        if (collatz_vect.back() == 1){
            break;
        }
        else{
            int collatz_current = collatz_vect.back();
            int collatz_next = collatz(collatz_current);
            collatz_vect.push_back(collatz_next);
        }
    }
    
    for(int i=0; i < collatz_vect.size(); i++)
       std::cout << collatz_vect.at(i) << ' ';
    
    
    return 0;
}
