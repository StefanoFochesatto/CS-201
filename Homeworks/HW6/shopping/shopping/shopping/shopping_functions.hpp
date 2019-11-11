//
//  shopping_functions.hpp
//  shopping
//
//  Created by Stefano Fochesatto on 11/10/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef shopping_functions_hpp
#define shopping_functions_hpp
#include<iostream>
#include<numeric>
#include<string>
#include<map>
#include<random>
#include<iomanip>
#include<vector>
#include<sstream>

struct item
{
    int quantity = 0;
    double cost;
};

bool getInt(int& num);
void printStoreCatalog(std::map<std::string, item>& shop);
void printCartInventory(std::map<std::string, item>& cart);
void add_to_order(std::map<std::string, item>& shop, std::map<std::string, item>& cart);
void remove_from_order(std::map<std::string, item>& shop, std::map<std::string, item>& cart);
void subtotal(std::map<std::string, item>& cart);
#endif /* shopping_functions_hpp */
