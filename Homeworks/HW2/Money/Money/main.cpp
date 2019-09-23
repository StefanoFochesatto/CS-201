//
//  main.cpp
//  Money
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Coin_Input.hpp"
#include "Coin_Output.hpp"
#include "Coin_Math.hpp"

std::vector<int> Coin_Input(std::vector<int> Coins);
void Coin_Output(std::vector<int> Coins);
int Coin_Math(std::vector<int> Coins);

int main(int argc, const char * argv[]) {
    std::vector<int> Coins;
    Coins = Coin_Input(Coins);
    
    
    Coin_Output(Coins);
    
    
    double Total = ((double (Coin_Math(Coins)))/ ((double) 100));
    std::cout << "Your total is: $" << Total << "\n";
    
    return 0;
}

