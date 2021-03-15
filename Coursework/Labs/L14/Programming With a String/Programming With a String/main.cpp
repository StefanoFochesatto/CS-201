//
//  main.cpp
//  Programming With a String
//
//  Created by Stefano Fochesatto on 10/4/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include<string>
#include "substring.hpp"



int main(int argc, const char * argv[]) {
    std::cout << "Pleae input a string: ";
    std::string User_Input;
    std::getline (std::cin, User_Input);
    subtring(User_Input);
    
    
    return 0;
}
