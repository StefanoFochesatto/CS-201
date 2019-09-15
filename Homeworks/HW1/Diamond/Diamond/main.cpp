//
//  main.cpp
//  Diamond
//this program print a diamond using hashtags
//  Created by Stefano Fochesatto on 9/6/19 for cs201.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "How big do you want your diamond\n";
    int lines_in_diamond;
  
    std::cin >>lines_in_diamond;
    int space = lines_in_diamond-1;
   
    
    for (int k=1; k<=lines_in_diamond; k++)//Top-half Diamond Parent Loop
    {
        for(int j=1; j<=space; j++)//Top-half Diamond Spaces Loop
        {
            std::cout<<" ";
        }
        space--;
        //Since there is one less space in the next row. Eventually this will go to 0 on the row before last and then the next time the parent for loop goes around the spaces loop will be skipped.
       
        
        for(int j=1; j<=(2*k-1); j++)//Top-half Diamond Hashes Loop
        {
            std::cout<<"#";
        }
        std::cout<<"\n";
        //We need a line break to go into the next row of the diamond.
    }
 
    
    
    space=1; //Before we start the loop for the bottom half of the diamond we need to set the spaces to one because there is always one space in the row under the middle one.
   
    
    
    for(int k=1; k<=(lines_in_diamond-1); k++)//Bottom-half Diamond Parent Loop. (lines_in_diamond-1) is because the middle row is printed in the Top-half parent loop.
    {
        for(int j=1; j<=space; j++)//Bottom-half Diamond Spaces Loop
        {
            std::cout<<" ";
        }
        space++;//We need to add the spaces back
        for(int j=1 ; j<=(2*(lines_in_diamond-k)-1); j++)//Bottom-half Hashes Spaces Loop
        {
            std::cout<<"#";
        }
        std::cout<<"\n";
    }
    return 0;
}
