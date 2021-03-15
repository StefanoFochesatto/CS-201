//
//  string_length.hpp
//  Functions
//
//  Created by Stefano Fochesatto on 9/16/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef string_length_hpp
#define string_length_hpp
#include <string.h>
#include <stdio.h>
#include <iostream>

void printStringLength(std::string a){
    int i = 0;
    while (a[i] != '\0')
    {
        ++i;
    }
    //std::cout <<"Your string had length: "<< i << std::endl;
    //for (int k=1;k<=i;k++){
        //std::cout <<"#";
    //}
    //std::cout <<"\n";
    for (int j = i-1; j > 0; j--){
        std::cout << a[j];
}
}


#endif /* string_length_hpp */
