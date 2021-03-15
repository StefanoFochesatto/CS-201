//
//  main.cpp
//  Classes and Objects
//
//  Created by Stefano Fochesatto on 11/20/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <iomanip> 

int main(int argc, const char * argv[]) {

    class algebra {
   
    private:
        int _integer;
        
        double _real;
    
   
    public:
        void setter_int(int n){
            _integer = n;
        }
        
        void setter_real(double n){
            _real = n;
        }
        
        int getter_int(){
               return _integer;
        }
        
        double getter_real(){
                  return _real;
        }
        
        void printSum(int n, int i){
            std::cout << n+i <<std::endl;
        }
        
        void toString(){
            //std::cout<< getter_int() <<std::endl;
            //std::cout<< getter_real()<< std::endl;
            std::cout<< _integer <<std::endl;
            std::cout<< _real << std::endl;
        }
        
    };
    
    
    algebra AA1;
    AA1.setter_int(5);
    AA1.setter_real(5.5);
    
    AA1.printSum(5,5);

    AA1.toString();
    return 0;
}
