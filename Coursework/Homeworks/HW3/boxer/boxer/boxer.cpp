//
//  boxer.cpp
//  boxer
//
//  Created by Stefano Fochesatto on 9/28/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "boxer.hpp"
#include <string>
#include <iostream>


void boxer(std::string user_input, int border){
    

    int verticle_space = 2*border + 3;
     
    int horizontile_space = 2*(border+1) + (int)user_input.length();
    
    for (int i = 1; i <= verticle_space; i++){
        
        if (i <= border)
            {
                for (int j = 1; j <= horizontile_space; j++){
                    std::cout << "*";
                }
                         std::cout << "\n";
            }
                
       
        
        else if (i == (border + 1))
        {
                for (int k = 1; k <= horizontile_space;k++)
                {
                    if (k <= border){
                        std::cout << "*";
                    }
                    else if ( k > (horizontile_space-border)){
                        std::cout << "*";
                    }
                    
                    else{
                        std::cout << " ";
                        
                    }
                }
            std::cout << "\n";
        }
                
        
        
        else if (i == (border + 2))
           {
                   for (int k = 1; k <= horizontile_space;k++)
                   {
                       if (k <= border){
                           std::cout << "*";
                       }
                       else if ( k > (horizontile_space-border)){
                           std::cout << "*";
                       }
                       
                       else if (k == border+1) {
                           std::cout << " ";
                       }
                       else if (k == (horizontile_space-border)){
                           std::cout << " ";
                       }
                       else {
                           std::cout << user_input[k-(border+2)];
                       }
                   }
               std::cout << "\n";
           }
                   
       
                
                
                
                
          else if (i == (border + 3))
                {
                        for (int k = 1; k <= horizontile_space;k++)
                        {
                            if (k <= border){
                                std::cout << "*";
                            }
                            else if ( k > (horizontile_space-border)){
                                std::cout << "*";
                            }
                            
                            else{
                                std::cout << " ";
                                
                            }
                        }
                    std::cout << "\n";
                }
                        
        
          else {
                  for (int j = 1; j <= horizontile_space; j++){
                      std::cout << "*";
                  }
                           std::cout << "\n";
              }
              
           
            
            
            
        }
             std::cout << "\n";
        
    }

