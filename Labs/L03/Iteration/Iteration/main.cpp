//
//  main.cpp
//  Iteration
//
//  Created by Stefano Fochesatto on 9/9/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

//This program prints out the first 20 ntural numbers using a while loop
//
int main(int argc, const char * argv[]) {
    int count=1;
    do{
        std::cout<< count <<std::endl;
        count = count + 1;
    }
    while (count<=20);
//This program prints a block of astersks using a nested while loop
//
    
    int y=1;
    int x=1;
    while (y<=6) {
        y++;
        while (x<=10) {
            std::cout<<"*";
            x++;
        }
       std::cout<<""<<std::endl;
        x=1;
    }
//This program does the same as the last one just with alternating characters
    
//
    
    int a=1;
    int b=1;
    while (a<=6) {
      a++;
        while (b<=5) {
        if (a % 2 == 0){
                std::cout<<"#*";
                b++;
            }
            else{
                    
                    std::cout<<"*#";
                    b++;
        }
        }
    std::cout<<std::endl;
      b=1;
    }
    }


