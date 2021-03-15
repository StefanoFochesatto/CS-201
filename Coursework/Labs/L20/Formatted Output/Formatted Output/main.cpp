//
//  main.cpp
//  Formatted Output
//
//  Created by Stefano Fochesatto on 10/21/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
int main(int argc, const char * argv[]) {
    
    
    
    
    
    for (int i = 0; i<=36; i++){
    double param, result, exponential;
      param = 5 * i;
   
    std::ostringstream oss1;
    
    
      result = cos ( param * M_PI / 180.0);
    oss1 << std::setw(3) <<param << "  " <<std::fixed <<std::setprecision(8) << std::setw(11) << result << std::endl;
    
    std::cout << oss1.str();
        
    }
     for (int j = 0; j<=36; j++){
             double param, exponential;
              exponential = exp(param / 10);
               param = 5 * j;
          std::ostringstream oss2;
    
        oss2 << std::setw(3) << param << "  " <<std::fixed <<std::setprecision(2) << std::setw(11) << exponential << std::endl;
         
         std::cout << oss2.str();
     }
    
    return 0;
}

