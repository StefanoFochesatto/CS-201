//
//  main.cpp
//  Nim
//
//  Created by Stefano Fochesatto on 8/31/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    
    cout <<"Nim is a mathematical game of strategy in which two players take turns removing (i.e., nimming)\n objects from distinct heaps or piles. On each turn, a player must remove at least one\n object, and may remove any number of objects provided they all come from the same heap/pile.\n Depending on the version being played, the goal of the game is either to avoid taking the last\n object, or to take the last object.\n";

    cout << " Would you like to play? (y/n)\n";
    string play;
    cin >> play;
    if (play == "n"){
        cout << "Goodbye!\n";
         exit(1);
    }
    int onepile, twopile, playerchoice, compchoice, totalpile, flip;
    bool winner = false;
        cout << " Enter the total number of sticks that will be in each pile? and just FYI in our version the goal is too take the last stick, but you can only take from one pile at a time!\n";
        cin >> totalpile;
        onepile=totalpile;
        twopile=totalpile;
        flip= rand() % 1;
    if (flip == 0){
        cout << "I'll go first.\n";
    }
    else{
        cout << "You go first.\n";
    }
    
    while(!winner){
        
        if (flip == 0){
            int compchoice= 1;
            cout << "I guess I'll take"<< compchoice << "from pile one.\n";
            cout << "There is now"<< onepile - compchoice << " sticks in pile one, and" << twopile << "sticks in pile two.\n";
        }
            
            
        
        
        
        
    }
        
    
    
        
    
    
    
    
    
    return 0;
}
