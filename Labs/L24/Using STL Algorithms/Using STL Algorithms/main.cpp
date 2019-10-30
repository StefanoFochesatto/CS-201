//
//  main.cpp
//  Using STL Algorithms
//
//  Created by Stefano Fochesatto on 10/30/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char * argv[]) {
    
    std::vector<int> unsorteddataset {1,6,2,5,6,4,2,6,7,2,1};
    
    for (int i : unsorteddataset){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    
    std::cout << "Sorting Data set" << std::endl;
    std::sort (unsorteddataset.begin(), unsorteddataset.end());
    
    
    
    for (int i : unsorteddataset){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    
    
     std::cout << "Reversing Data set"<< std::endl;
    std::reverse(unsorteddataset.begin(), unsorteddataset.end());
    
    for (int i : unsorteddataset){
        std::cout << i << " ";
    }
    
    
    std::cout << std::endl;
    
    
    
    
     std::cout << "Filling the sata set with 0"<< std::endl;
     std::fill (unsorteddataset.begin(),unsorteddataset.end(),0);
    
    
    for (int i : unsorteddataset){
        std::cout << i << " ";
    }
    
    
    std::cout << std::endl;
    
    
    
    
    return 0;
}
