//
//  main.cpp
//  boxer
//
//  Created by Stefano Fochesatto on 9/28/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "boxer.hpp"






int main(int argc, const char * argv[]) {
    
    
    while (true){
    
    std::cout << "Please enter a string: ";
    
    std::string user_string;
    
    std::cin >> user_string;
        
        if (user_string == "exit"){
            break;
        }
    
    std::cout << "Please enter the width of your border: ";
    
    int border;
    
    std::cin >> border;
    
        if (border<=0){
            std::cout << "Please enter a positive width for your border: \n ";
            std::cin >> border;
        }
    boxer(user_string,border);
    
    }
    
    
    return 0;
}
