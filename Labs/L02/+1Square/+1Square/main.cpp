//
//  main.cpp
//  +1Square
//
//  Created by Stefano Fochesatto on 9/4/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int base;
    std::cout << "Hello Please enter an integer!\n";
    std::cin >> base;
    int square= (base + 1)*(base + 1);
    std::cout << square << std:: endl;
    return 0;
}


