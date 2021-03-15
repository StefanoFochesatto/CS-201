//
//  main.cpp
//  mileskm
//
// This program converts miles to kilometers.
//  Created by Stefano Fochesatto on 9/14/19 for cs201.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Please enter how many miles?\n";
    float miles;
    std::cin >> miles;
    std::cout << miles<< " miles in kilometers is " << miles*1.609<< std::endl;
    
    return 0;
}
