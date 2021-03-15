//
//  Coin_Output.hpp
//  Money
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef Coin_Output_hpp
#define Coin_Output_hpp
#include <iostream>
#include <vector>
#include <stdio.h>
void Coin_Output(std::vector<int> Coins){

const char *coinTypes[] = {" pennies", " nickles"," dimes", " quarters", " half-dollars"};
const char *coinTypesSing[] = {" penny", " nickle"," dime", " quarter", " half-dollar"};
    
    for (int i = 0 ; i<=4; i++){
        if (Coins.at(i)>1){
    std::cout<<"You have " << Coins.at(i) <<""<< coinTypes[i]<< ".\n";
}
        else{
  std::cout<<"You have " << Coins.at(i) <<""<< coinTypesSing[i]<< ".\n";
        }
}
}

#endif /* Coin_Output_hpp */
