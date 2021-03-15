//
//  main.cpp
//  Bits and flags
//
//  Created by Stefano Fochesatto on 12/2/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>

 const int  Crunchwrap = 1;
 const int  Rolled_Chicken_Taco = 2;
 const int  Double_Chalupa= 4;
 const int  Crunchy_Taco_Supreme= 8;
 const int  Supreme_Taco_Part_Pack= 16;
 const int  Chiken_Quesadilla = 32;

void TacoBell_Order(int menu_item)
{
       std::cout << "Your order: \n";

       if ((menu_item & Crunchwrap) != 0)
           std::cout << " Crunchwrap"<< std::endl;
       if ((menu_item & Rolled_Chicken_Taco) != 0)
           std::cout << " Rolled_Chicken_Taco"<< std::endl;
       if ((menu_item & Double_Chalupa) != 0)
          std::cout << " Double_Chalupa"<< std::endl;
       if ((menu_item & Crunchy_Taco_Supreme) != 0)
           std::cout << " Crunchy_Taco_Supreme"<< std::endl;
       if ((menu_item & Supreme_Taco_Part_Pack) != 0)
          std:: cout << " Supreme_Taco_Part_Pack"<< std::endl;
       if ((menu_item & Chiken_Quesadilla) != 0)
           std::cout << " Chiken_Quesadilla"<< std::endl;
       if (menu_item == 0)
           std::cout << " Your order is empty";

       std::cout << std::endl;
   }
void TacoBell_Order(){
        std::cout << "Your order: \n";
          std::cout << " Your order is empty \n";
}

int main(int argc, const char * argv[]) {
 
    TacoBell_Order(Crunchwrap | Rolled_Chicken_Taco);
    TacoBell_Order(Crunchwrap | Rolled_Chicken_Taco | Crunchy_Taco_Supreme);
    TacoBell_Order();
   
    std::cout <<" A double is : " << sizeof(double)<< " bytes \n";
    std::cout <<" A double is : " << 8 * sizeof(double)<< " bits \n";

}



