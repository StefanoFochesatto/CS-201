//
//  main.cpp
//  Pseudorandom numbers
//
//  Created by Stefano Fochesatto on 11/6/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <random>
#include <vector>
using std::mt19937;


int main(int argc, const char * argv[]) {
    
    
    std::uniform_int_distribution<int> distrib(0,999);
    std::random_device rd;
    mt19937 gen(rd());
    int heads = 0;
    int tails = 0;
    for (int i = 0; i<=999; i++){
        int randval = distrib(gen);
        if (randval % 2)
            heads++;
        else
            tails++;
            }
    std::cout << "Heads: " <<heads <<" Tails: " << tails <<std::endl;
    
    
    std::vector<int> rand_data;
    for(int i = 1; i<=100; i++){
        rand_data.push_back(i);
    }
  
    std::random_shuffle ( rand_data.begin(), rand_data.end());

    for (std::vector<int>::iterator it=rand_data.begin(); it!=rand_data.end(); ++it)
       std::cout << ' ' << *it;

     std::cout << '\n';
    
    
    
    
    
    
    
    
    
    
    return 0;
}
