//
//  main.cpp
//  Poem Fetcher
//
//  Created by Stefano Fochesatto on 8/31/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//


#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, const char * argv[]) {
    string x;
    ifstream file;
    file.open("beowulf.txt");
 
    if (!file) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while (getline(file,x)) {
        cout << x << endl ;
    }
    file.close();
}
