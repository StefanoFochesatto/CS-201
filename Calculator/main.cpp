////
//  main.cpp
//  Arithmatic
//
//  Created by Stefano Fochesatto on 8/27/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//
//
//
//
//

#include <iostream>

int main() {
    using namespace std;
    cout << "Hello! What operation would you like to perform?\n";
    //Initilizing the the tring that represents the operation
    string operation;
    cin >> operation;
    cout << "Enter two integers to operate?\n";
    //initilizing each integer.
    int number1;
    int number2;
    cin >> number1;
    cin >> number2;
    // If statement for each arithmetic operation
    if (operation == "+")
    {
        cout <<"Adding "<<number1<<" and "<<number2<<"."<<" Result:"<<number1+number2<<". \n"  ;
    }
    if (operation == "-")
    {
        cout <<"Subtracting "<<number2<<" from "<<number1<<"."<<" Result:"<<number1-number2<<".\n"  ;
    }
    if (operation == "*")
    {
        cout <<"Multiplying "<<number1<<" and "<<number2<<"."<<" Result:"<<number1*number2<<".\n"  ;
    }
    
    if (operation == "/")
    {
        cout <<"Dividing "<<number1<<" over  "<<number2<<"."<<" Result:"<<number1/number2<<".\n"  ;
        
    }
    return 0;
}



