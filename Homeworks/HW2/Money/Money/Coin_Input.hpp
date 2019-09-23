//
//  Coin_Input.hpp
//  Money
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef Coin_Input_hpp
#define Coin_Input_hpp

#include <iostream>
#include <vector>
#include <stdio.h>

std::vector<int> Coin_Input(std::vector<int> Coins){
    const char *coinTypes[] = {" pennies: ", " nickles: "," dimes: ", " quarters: ", " half-dollars: "};
    for (int i = 0 ; i<=4; i++){
     int NumOfCoins;
        std::cout << "How many" << coinTypes[i];
        std::cin >> NumOfCoins;
        Coins.push_back(NumOfCoins);
        
    }
    return Coins;
}
    

#endif /* Coin_Input_hpp */
