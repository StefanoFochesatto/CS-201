//
//  main.cpp
//  Map
//
//  Created by Stefano Fochesatto on 10/28/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
int main(int argc, const char * argv[]) {

    std::map<int, std::string> m;
    
   m[40]="Stefano";
    m[24]= "Brons";
    m[60] ="Rohan" ;
   m[75]="Rachel" ;
    m[30]="Max" ;
  m[75] = "Sarah" ;
    
    m.erase(40);
     
    std::string User_string;
    int User_int;
    while (true){
        std::cin >> User_int;
        int check = m.count(User_int);
        if (check){
            getline(std::cin, User_string);
            m[User_int] = User_string;
        }
        if (User_int == -1){
            break;
        }
        
    
        
        
    }
    
    
    
    
    
    for (const auto & p : m){
        auto Value = p.first;
        auto Key = p.second;
        std::cout << "Key: " << Key << ", value: " << Value << std::endl;
    }
    
    
    
    return 0;
}
