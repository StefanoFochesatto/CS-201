//
//  AnalyzeTokens.cpp
//  Tokenizer
//
//  Created by Stefano Fochesatto on 10/15/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "AnalyzeTokens.hpp"

#include <iostream>
#include <string>
#include <vector>


bool isNumber(std::string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]))
            return true;
  
    return false;
}


bool isLiteral(std::string s)
{
    for (int i = 0; i < s.length(); i++)
          if (isalpha(s[i]))
              return true;
    
    return false;
}

bool isStringLiteral(std::string s)
{
          if (s.rfind("\"",0) == 0)
              return true;
    
    return false;
}

bool isWhiteSpace(std::string s)
{
       if (s == "\n"){
            return true;
        }
    return false;
    
}





void AnalyzeTokens(const std::vector<std::string> &tokens){


    
    for(int i = 0; i < tokens.size(); i++){
        
        
        
        
        if(isNumber(tokens[i])){
            std::cout << "[Integer]  " << "\"" << tokens[i] << "\" \n";
        }
        
        else if(isLiteral(tokens[i])){
                        std::cout << "[Literal]  " << "\"" << tokens[i] << "\" \n";
            
        }
        
        else if(isStringLiteral(tokens[i])){
                                    std::cout << "[String Literal]  "<< "\"" << tokens[i] << "\" \n";
            
            
        }
           
        else if(isWhiteSpace(tokens[i])){
                                std::cout << "[Whitespace]  " << " \" \" \n";
        
            
            
        }
        
        else if(tokens[i] == ""){

        }
           
           
        else{
            
                                            std::cout << "[unknown]  " << "\"" << tokens[i] << "\" \n";
            
        }
  
    
    
    
    
    
    
    
    
    
    }
    
    
}
