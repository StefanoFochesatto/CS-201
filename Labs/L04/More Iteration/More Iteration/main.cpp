//
//  main.cpp
//  More Iteration
//
//  Created by Stefano Fochesatto on 9/11/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

// Additional lab


int main(int argc, const char * argv[]) {
    
    for(int i=0; i<=99; i++){
        
        if(((i+1)%5)==0&&((i+1)%3)==0){
            std::cout << "fizzbuzz" << std::endl;
            
        }
        else if((i+1)%5==0){
            std::cout << "buzz" << std::endl;
        }
        else if((i+1)%3==0){
        std::cout << "fizz" << std::endl;
        
        }
        else{
            std::cout << i+1 << std::endl;
    
        }
    }
    return 0;
}

















/**
int main(int argc, const char * argv[]) {
   
    for(int i=0; i<=99; i++){
        if((i+1)%3)
        {
            std::cout << i+1 << std::endl;
        }
        else{
            std::cout << "fizz" << std::endl;
            
        }
    }
    return 0;
}
 **/
