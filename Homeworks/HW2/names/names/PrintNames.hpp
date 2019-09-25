//
//  PrintNames.hpp
//  names
// 
//  Created by Stefano Fochesatto on 9/22/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef PrintNames_hpp
#define PrintNames_hpp
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

void PrintNames(std::vector<std::string> names){
    for (int i = 0; i<=9 ; i++ )
    {
        std::cout << names.at(i) << " ";
    }
    std::cout << "\n";


}
#endif /* PrintNames_hpp */
