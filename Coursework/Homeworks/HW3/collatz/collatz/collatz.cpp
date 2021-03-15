//
//  collatz.cpp
//  collatz
//
//  Created by Stefano Fochesatto on 9/28/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "collatz.hpp"

int collatz(int collatz_current){
    
    if (!(collatz_current%2)){
        return collatz_current/2;
    }
    
    else {
        return 3*(collatz_current)+1;
    }
}
