//
//  main.cpp
//  Date Program
//
//  Created by Stefano Fochesatto on 9/4/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <iomanip>//Include for setw() and setfill() commands

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Please enter month, day, and year of your birthday!\n";
    int month;
    int day;
    int year;
    std::cin >> month;
    std::cin >> day;
    std::cin >> year;
    
    
    
    std::cout << "Your birthday is "<< month<<"/"<<day<<"/"<<year <<"\n";
 
    
    
    std::cout << std::setw(2) << std::setfill('0') << month<<"/"<<day<<"/"<<year <<"\n";
    // setw(2) if in is shorter that 2 setfill('0') fill in until 2 with 0
    
    

}
    
    

