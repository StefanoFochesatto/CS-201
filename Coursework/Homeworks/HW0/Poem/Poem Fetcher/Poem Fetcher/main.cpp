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

    ifstream Infile;
    Infile.open("/Users/stefanofochesatto/Documents/Documents/cs201/hw0/Poem/Poem Fetcher/Poem Fetcher/beowulf.txt");
 
    if (!Infile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    string x;
    while (getline(Infile,x)) {
        cout << x << endl ;
    }
    Infile.close();
}
