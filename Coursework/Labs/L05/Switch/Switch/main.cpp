//
//  main.cpp
//  Switch
//
//  Created by Stefano Fochesatto on 9/13/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    std::cout <<"please enter an integer 1,2 or 3"<< std::endl;
    
    int user_input;
    std::cin >> user_input;
    
    switch(user_input){
        case 1:
            std::cout <<user_input*2<<  " is your number times 2"<< std::endl;
            break;
        case 2:
            std::cout <<user_input*5<< " is your number times 5"<< std::endl;
            break;
        case 3:
            std::cout <<user_input-1<< " is your number minus 1"<< std::endl;
            break;
        default:
            std::cout << "your number is too high."<< std::endl;
    }
// Here is the same program but written using if statements.
    if (user_input==1){
        
                    std::cout <<user_input*2<< " is your number times 2"<< std::endl;
    }
    
    else if(user_input==2){
                    std::cout <<user_input*5<< " is your number times 5"<< std::endl;
    }
        
    else if (user_input==3){
                    std::cout <<user_input-1<< " is your number minus 1"<< std::endl;
    }
            
    else{
                    std::cout << "your number is too high."<< std::endl;
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
