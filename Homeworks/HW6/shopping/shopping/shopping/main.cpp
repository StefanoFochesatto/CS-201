//
//  main.cpp
//  shopping
//
//  Created by Stefano Fochesatto on 11/10/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//


#include<iostream>
#include<numeric>
#include<string>
#include<map>
#include<random>
#include<iomanip>
#include<vector>
#include<sstream>
#include "shopping_functions.hpp"

int fully_stocked = 10;

int main(int argc, const char * argv[]) {
    
    item item_1;
    item_1.cost = 10;
    
    item item_2;
    item_2.cost = 10;
    
    item item_3;
    item_3.cost = 10;
    
    item item_4;
    item_4.cost = 10;
    
    item item_5;
    item_5.cost = 10;
    
    std::map<std::string, item> shop =
    {
        {"item_1", item_1},
        {"item_2", item_2},
        {"item_3", item_3},
        {"item_4", item_4},
        {"item_5", item_5}
    };
    
    std::map<std::string, item> cart = shop;
    
    for (auto& i : shop)
    {
        i.second.quantity = fully_stocked;
    }
    
    

    int menuchoice = 0;
    
    while (menuchoice != 5)
    {
        std::cout
            << "Welcome! Please select one of the options below!\n"
            << "1. Open store catalog\n"
            << "2. Add to order\n"
            << "3. Remove from order\n"
            << "4. View order\n"
            << "5. Mail order\n"
            << std::endl;

    if (getInt(menuchoice))
        {
        

            switch (menuchoice)
            {

            case 1:
                    printStoreCatalog(shop);
                break;

            case 2:
                    add_to_order(shop,cart);
                break;

            case 3:
                     remove_from_order(shop,cart);
                break;

            case 4:
                      printCartInventory(cart);
                break;

            case 5:
               subtotal(cart);

                break;

            default:
                std::cout << "Please enter a number 1-5" << std::endl;
            }
        }
        else
        {
            std::cout << "Please enter an integer" << std::endl;
        }
    }
    
    
    
    return 0;
}
