//
//  shopping_functions.cpp
//  shopping
//
//  Created by Stefano Fochesatto on 11/10/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "shopping_functions.hpp"

bool getInt(int& num)
{
    std::string input;

    getline(std::cin, input);
    std::istringstream instream(input);
    instream >> num;

    if (instream)
        return true;
    else
        return false;
}

void printStoreCatalog(std::map<std::string, item>& shop)
{
    for (auto i : shop)
    {
        std::cout << i.first << ":\n"
            << "$" << i.second.cost << "\n"
            << "Quantity: " << i.second.quantity << "\n"<< std::endl;
    }
}

void printCartInventory(std::map<std::string, item>& cart)
{
    for (auto i : cart)
    {
        std::cout << i.first << ":\n"
            << "$" << i.second.cost << "\n"
            << "Quantity: " << i.second.quantity << "\n"<< std::endl;
    }
}



void add_to_order(std::map<std::string, item>& shop, std::map<std::string, item>& cart){
    
    
    int menuchoice = 0;
    int quantity;
      while (menuchoice != 6)
      {
          std::cout
              << "Which item would you like to add?\n"
              << "1. item_1\n"
              << "2. item_2\n"
              << "3. item_3\n"
              << "4. item_4\n"
              << "5. item_5\n"
              << "6. return\n"
              << std::endl;

      if (getInt(menuchoice))
          {
          

              switch (menuchoice)
              {

              case 1:
                      std::cout << "item_1 :\n"
                                 << "$" << shop["item_1"].cost << "\n"
                                 << "Quantity: " << shop["item_1"].quantity << "\n"<< std::endl;
                      
                      
                      std::cout << "How many would you like ?" <<std::endl;
                      
                      getInt(quantity);
                      if (quantity > shop["item_1"].quantity){
                          std::cout << "Thats too many!!\n ";
                      }
                      else{
                          shop["item_1"].quantity -= quantity;
                          cart["item_1"].quantity += quantity;
                          std::cout << quantity << " item_1 have been added" << std::endl;
                      }
                  break;

              case 2:
                      std::cout << "item_2 :\n"
                                       << "$" << shop["item_2"].cost << "\n"
                                       << "Quantity: " << shop["item_2"].quantity << "\n"<< std::endl;
                            
                            
                            std::cout << "How many would you like ?" <<std::endl;
                            
                            getInt(quantity);
                            if (quantity > shop["item_2"].quantity){
                                std::cout << "Thats too many!!\n ";
                            }
                            else{
                                shop["item_2"].quantity -= quantity;
                                cart["item_2"].quantity += quantity;
                                std::cout << quantity << " item_2 have been added" << std::endl;
                            }
                  break;

              case 3:
          std::cout << "item_3 :\n"
                           << "$" << shop["item_3"].cost << "\n"
                           << "Quantity: " << shop["item_3"].quantity << "\n"<< std::endl;
                
                
                std::cout << "How many would you like ?" <<std::endl;
                
                getInt(quantity);
                if (quantity > shop["item_3"].quantity){
                    std::cout << "Thats too many!!\n ";
                }
                else{
                    shop["item_3"].quantity -= quantity;
                    cart["item_3"].quantity += quantity;
                    std::cout << quantity << " item_3 have been added" << std::endl;
                }
                  break;
                  
            case 4:
                      std::cout << "item_4 :\n"
                          << "$" << shop["item_4"].cost << "\n"
                          << "Quantity: " << shop["item_4"].quantity << "\n"<< std::endl;
               
               
               std::cout << "How many would you like ?" <<std::endl;
               
               getInt(quantity);
                            if (quantity > shop["item_4"].quantity){
                                std::cout << "Thats too many!!\n ";
                            }
                            else{
                                shop["item_4"].quantity -= quantity;
                                cart["item_4"].quantity += quantity;
                                std::cout << quantity << " item_4 have been added" << std::endl;
                            }
            break;
              
                  
            case 5:
                      std::cout << "item_5 :\n"
                            << "$" << shop["item_5"].cost << "\n"
                            << "Quantity: " << shop["item_5"].quantity << "\n"<< std::endl;
                                
                                
                      std::cout << "How many would you like ?" <<std::endl;
                                
                      getInt(quantity);
                            if (quantity > shop["item_5"].quantity){
                                std::cout << "Thats too many!!\n ";
                            }
                            else{
                                shop["item_5"].quantity -= quantity;
                                cart["item_5"].quantity += quantity;
                                std::cout << quantity << " item_5 have been added" << std::endl;
                            }
            break;

              default:
                  std::cout << "Please enter a number 1-6" << std::endl;
              }
          }
          else
          {
              std::cout << "Please enter an integer" << std::endl;
          }
      }
}
    
    
    void remove_from_order(std::map<std::string, item>& shop, std::map<std::string, item>& cart){
    int menuchoice = 0;
        int quantity;
      while (menuchoice != 6){
          std::cout
              << "[Which item would you like to add?]\n"
              << "1. item_1\n"
              << "2. item_2\n"
              << "3. item_3\n"
              << "4. item_4\n"
              << "5. item_5\n"
              << "6. return\n"
              << std::endl;

      if (getInt(menuchoice))
          {
          

              switch (menuchoice)
              {

              case 1:
                      std::cout << "item_1 :\n"
                                 << "$" << cart["item_1"].cost << "\n"
                                 << "Quantity: " << cart["item_1"].quantity << "\n"<< std::endl;
                      
                      
                      std::cout << "How many would you like to remove ?" <<std::endl;
                      
                      getInt(quantity);
                      if (quantity > cart["item_1"].quantity){
                          std::cout << "Thats too many!!\n ";
                      }
                      else{
                          cart["item_1"].quantity -= quantity;
                          shop["item_1"].quantity += quantity;
                          std::cout << quantity << " item_1 have been removed form order" << std::endl;
                      }
                  break;

              case 2:
                      std::cout << "item_2 :\n"
                                       << "$" << cart["item_2"].cost << "\n"
                                       << "Quantity: " << cart["item_2"].quantity << "\n"<< std::endl;
                            
                            
                            std::cout << "How many would you like to remove?" <<std::endl;
                            
                            getInt(quantity);
                            if (quantity > cart["item_2"].quantity){
                                std::cout << "Thats too many!!\n ";
                            }
                            else{
                                cart["item_2"].quantity -= quantity;
                                shop["item_2"].quantity += quantity;
                                std::cout << quantity << " item_2 have been added have been removed " << std::endl;
                            }
                  break;

              case 3:
          std::cout << "item_3 :\n"
                           << "$" << cart["item_3"].cost << "\n"
                           << "Quantity: " << cart["item_3"].quantity << "\n"<< std::endl;
                
                
                std::cout << "How many would you like to remove?" <<std::endl;
                
                getInt(quantity);
                if (quantity > cart["item_3"].quantity){
                    std::cout << "Thats too many!!\n ";
                }
                else{
                    cart["item_3"].quantity -= quantity;
                    shop["item_3"].quantity += quantity;
                    std::cout << quantity << " item_3 have been removed " << std::endl;
                }
                  break;
                  
            case 4:
                      std::cout << "item_4 :\n"
                          << "$" << cart["item_4"].cost << "\n"
                          << "Quantity: " << cart["item_4"].quantity << "\n"<< std::endl;
               
               
               std::cout << "How many would you like to remove ?" <<std::endl;
               
               getInt(quantity);
                            if (quantity > cart["item_4"].quantity){
                                std::cout << "Thats too many!!\n ";
                            }
                            else{
                                cart["item_4"].quantity -= quantity;
                                shop["item_4"].quantity += quantity;
                                std::cout << quantity << " item_4 have been removed" << std::endl;
                            }
            break;
              
                  
            case 5:
                      std::cout << "item_5 :\n"
                            << "$" << cart["item_5"].cost << "\n"
                            << "Quantity: " << cart["item_5"].quantity << "\n"<< std::endl;
                                
                                
                      std::cout << "How many would you like to remove ?" <<std::endl;
                                
                      getInt(quantity);
                            if (quantity > cart["item_5"].quantity){
                                std::cout << "Thats too many!!\n ";
                            }
                            else{
                                cart["item_5"].quantity -= quantity;
                                shop["item_5"].quantity += quantity;
                                std::cout << quantity << " item_5 have been removed" << std::endl;
                            }
            break;

              default:
                  std::cout << "Please enter a number 1-6" << std::endl;
              }
          }
          else
          {
              std::cout << "Please enter an integer" << std::endl;
          }
      }
    }
        
        
        void subtotal(std::map<std::string, item>& cart){
            int total = 0;
                     std::cout <<"Item:"<< std::setw(20) <<"Quantity:" << std::setw(20) << "Item Price:"<< std::setw(20) << "Subtotal:" <<std::endl;
            for (auto i : cart)
       {
           std::cout << i.first << std::setw(20) << i.second.quantity  << std::setw(20)<<"$"<<i.second.cost <<std::setw(20) <<  i.second.quantity*i.second.cost <<std::endl;
           total += (i.second.cost * i.second.quantity);
       }
            std::cout <<"\nTotal "<< std::setw(59) << "$" <<total<< "\n"<<std::endl;
            std::cout << "*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!    Thank You For Shopping    !*!*!*!*!*!*!*!*!*!*!*!*!*!*!*" << std::endl;
            
        
    }

