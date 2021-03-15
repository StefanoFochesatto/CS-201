//
//  main.cpp
//  File Output
//
//  Created by Stefano Fochesatto on 11/8/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <random>


int main(int argc, const char * argv[]) {

    std::string file = "file_output.txt";
    
    std::ofstream output(file);
    
    for (int i = 0; i <= 9; i++){
        std::string text = " Hello World!";
        output << text << std::endl;
    }
    
    
    for (int i = 1; i<=91; i+=10){
        int count = i;
        for (int k = count; k<=count + 9; k++){
                output << std::setw(2) << k <<" ";
        }
        output << std::endl;
    }
        
            output << std::endl;
            output << std::endl;
    

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1,100);
    std::vector<int> rand_data;
      for(int i = 1; i<=100; i++){
          rand_data.push_back(i);
      }
    
    std::random_shuffle ( rand_data.begin(), rand_data.end());
    
    for(auto i : rand_data){
        std::cout << i << " ";
    }
    
    
    
    for (int i = 0; i<=90; i+=10){
        int count = i;
        for (int k = count; k<=count + 9; k++){
            output << std::setw(2) << rand_data[k] <<" ";
        }
        output << std::endl;
    }
    
    return 0;
}
