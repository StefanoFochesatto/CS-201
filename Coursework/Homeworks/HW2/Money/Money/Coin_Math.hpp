//
//  Coin_Math.hpp
//  Money
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef Coin_Math_hpp
#define Coin_Math_hpp

#include <iostream>
#include <vector>
#include <functional>
#include <numeric>
#include <stdio.h>
int Coin_Math(std::vector<int> Coins){

    int coinVal[] = {1,5,10,25,50};

    std::vector<int> CoinsXCoinVal;
    
    for (int i = 0 ; i<=4; i++){
    int TotalCoinVal;
        TotalCoinVal = Coins.at(i)*coinVal[i];
        CoinsXCoinVal.push_back(TotalCoinVal);
       }
    return std::accumulate(CoinsXCoinVal.begin(), CoinsXCoinVal.end(), 0);
}


#endif /* Coin_Math_hpp */
