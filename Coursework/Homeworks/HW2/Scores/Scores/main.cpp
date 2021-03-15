//
//  main.cpp
//  Scores
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Input_Scores.hpp"
#include <utility>
int main(int argc, const char * argv[]) {
    std::vector<std::pair<std::string, int>> Names_Scores;
    Names_Scores = Input_Scores(Names_Scores);
   
   
    
    
    
    
    bool MenuRuntime = true;
    while (MenuRuntime == true){
    int MenuSelection;
    std::cout << "Please select from the menu below,\n";
    
    std::cout << "1: Add More Names and Scores \n";
    std::cout << "2: Print the Names and Scores \n";
    std::cout << "3: Search for a Name \n";
    std::cout << "4: Search for a Score\n";
    std::cin >> MenuSelection;
    if (MenuSelection == 1){
    Names_Scores = Input_Scores(Names_Scores);
    }
    else if (MenuSelection == 2){
        for(int i = 0; i < Names_Scores.size(); i++)
        {
             std::cout << Names_Scores[i].first << ", " << Names_Scores[i].second << std::endl;
        }
    }
    else if (MenuSelection == 3){
        std::string nameToFind;
        std::cout << "Enter the name you want to search: ";
        std::cin >> nameToFind;
        int i = 0;
        int counter=0;
        while (i <= Names_Scores.size()){
                std::string cName = Names_Scores[i].first;
                if (cName == nameToFind){
                     std::cout << Names_Scores[i].first << ", " << Names_Scores[i].second << std::endl;;
                    counter++;
                }
                i++;
            }
        if (counter==0){
            std::cout <<"Unable to find Name!! \n";
        
        }
    }
    else if (MenuSelection == 4){
        int scoreToFind;
        std::cout << "Enter the score you want to search: ";
        std::cin >> scoreToFind;
        int i = 0;
        int counter=0;
        while (i <= Names_Scores.size()){
                int cScore = Names_Scores[i].second;
                if (cScore == scoreToFind){
                     std::cout << Names_Scores[i].first << ", " << Names_Scores[i].second << std::endl;;
                    counter++;
                }
                i++;
            }
        if (counter==0){
            std::cout <<"Unable to find Score!! \n";
        
        }
        
    }
    else{
        std::cout << "Exiting program!,\n";
        MenuRuntime = false;
        
    }
    
    }
}
