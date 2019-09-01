//
//  main.cpp
//  Hello World
//
//  Created by Stefano Fochesatto on 8/31/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!(Using Single String)\n";

    
    for (int i=1; i<=10;i++)
    {
        std::cout << "Hello, World!(Using For Loop)\n";
    }
    
    
    int j=1;
    while (j<=10){
        std::cout <<"Hello, World!(Using While Loop)\n";
        j++;
    }
    
    
    
    
    int k=1;
    do {
         std::cout <<"Hello, World!(Using Do While Loop)\n";
        k++;
    }
    while(k<=10);
    
    
    
    
    for (int x=1; x<=2;x++)
    {
        for (int y=1; y<=5;y++)
        {
            std::cout << "Hello, World!(Using Nested For Loop)\n";
        }
        
    }
    
    
    
    return 0;
}
