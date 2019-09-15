//
//  main.cpp
//  Greatest Integer
//
//  Created by Stefano Fochesatto on 9/14/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
int main(int argc, const char * argv[]) {
    std::cout << "Enter a sequence of positive integers, ending with zero.\nI will print the greatest positive number entered.\n";
    
    bool run=true;//This is the boolean for the do while loop. gotta keep the program running until the user eneters an int less than 0.
    
    std::vector<int> arr;//Here we want to intialize a vector to store user inputs.
    
    
    do{
        std::cout << "Enter a positive integer (0 to end): ";
        int user_input;
        std::cin >> user_input;
       
        if (user_input>0){
            arr.push_back(user_input);// adds user_input to vector.
        }
        else{
            run=false;
        }
         std::sort(arr.begin(), arr.end());//We use sort() to sort the element in the vector from smallest to largest. sort() uses Introsort algorithm.
    }
    while(run==true);
    
    if (arr.empty()){
        //if statement for when vector is has no elements
        std::cout <<"No posistive integers were entered!!"<< std::endl;
        }
    else{
        int n = (uint32_t)arr.size();//We need to find the size of the vector and then cast it as a 32 bit int.
        std::cout <<"The greatest number entered:"<< arr[n - 1] << std::endl;// We do arr[n - 1] because the last element in the vector has an index of n-1.
    }
    return 0;
}
