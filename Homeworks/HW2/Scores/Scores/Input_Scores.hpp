//
//  Input_Scores.hpp
//  Scores
//
//  Created by Stefano Fochesatto on 9/23/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef Input_Scores_hpp
#define Input_Scores_hpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <utility>

std::vector<std::pair<std::string, int>> Input_Scores(std::vector<std::pair<std::string, int>> Names_Scores){
        
    
    bool runtime = true;
   std::string Input_Name;
   int Input_Score;
   while(runtime == true){
        std::cout << "Please enter a Name and then a Score:";
        std::cin >> Input_Name;
        std::cin >> Input_Score;
        if(Input_Name == "NoName" && Input_Score == 0){
            break;
        }
        else{
       Names_Scores.emplace_back(Input_Name, Input_Score);
            
        }
            
    }
        sort( Names_Scores.begin(), Names_Scores.end() );

    return Names_Scores;

}



#endif /* Input_Scores_hpp */
