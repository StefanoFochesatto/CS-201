//
//  main.cpp
//  names
//
//  Created by Stefano Fochesatto on 9/20/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(int argc, const char * argv[]) {

    std::vector<std::string> names;
    for (int i = 0 ; i<10; i++){
        std::string name;
        std:: cout <<"Please enter a name: ";
        std::getline(std::cin, name);
        names.push_back(name);
        
        
    }
    
    
    return 0;
}
