//
//  main.cpp
//  Tokenizer
//
//  Created by Stefano Fochesatto on 10/15/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "ReadLine.hpp"
#include "tokenize.hpp"
#include "StringToTokensWS.hpp"
#include "AnalyzeTokens.hpp"








int main(int argc, const char * argv[]) {

    std::cout << "Please enter a string" << std::endl;
    std::string user_input;
    
    
    while (true){
    std::string place_holderstring;
    std::getline(std::cin, place_holderstring);
        
        if (place_holderstring == "end")
            break;
        
        if (place_holderstring == "")
            place_holderstring = " \n ";
        
        if (place_holderstring == " ")
            break;
       
        user_input = user_input + place_holderstring;
    }
    
    
    if(ReadLine(user_input)){
    std::cout <<"You entered a string!"<< std::endl;
    }
    
    
    
    std::vector<std::string> tokens = tokenize(user_input);
    StringToTokensWS(tokens);
  
    
    AnalyzeTokens(tokens);
    
      
    
    
    
    return 0;
}
