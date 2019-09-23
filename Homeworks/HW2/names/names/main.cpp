//
//  main.cpp
//  names
//
//  Created by Stefano Fochesatto on 9/20/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "InputNames.hpp"
#include "DoesNameExist.hpp"
#include "PrintNames.hpp"
#include "SortAlphabetical.hpp"

std::vector<std::string> InputNames(std::vector<std::string> names);
bool DoesNameExist(const std::string nameToFind, std::vector<std::string> names);
void PrintNames(std::vector<std::string> names);
std::vector<std::string> SortAlphibetical(std::vector<std::string> names);


int main(int argc, const char * argv[]){
    std::vector<std::string> names;
    names = InputNames(names);
    
    
    std::string nameToFind;
    std::cout <<"Type a name to search: ";
    std::getline(std::cin, nameToFind);
    std::cout << DoesNameExist(nameToFind,names)<< "\n";
    
    
    
    PrintNames(names);
    
    names = SortAlphibetical(names);
    
    PrintNames(names);
    
}

