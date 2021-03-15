// search_compare.cpp  INCOMPLETE
// Glenn G. Chappell
// 25 Feb 2018
//
// For CS 201 Spring 2018
// Compare Search Algorithms
//
// Modified
// Chris Hartman
// 3 Oct 2018
//
// For CS 201 Fall 2018

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
// for clock
#include <stdio.h>
#include <time.h>
#include "binarySearch.hpp"
#include "sequentialSearch.hpp"
// binarySearch
// Given a SORTED vector<int> holding keys, and a vector<int> holding
// the associated values, and a key to search for (thekey). Does Binary
// Search in an attempt to find the given key. If it is not found,
// returns false. If it is found, sets thevalue to the associated value
// and returns true.


// sequentialSearch
// Given a vector<int> holding keys, and a vector<int> holding the
// associated values, and a key to search for (thekey). Does Sequential
// Search in an attempt to find the given key. If it is not found,
// returns false. If it is found, sets thevalue to the associated value
// and returns true.


// readInt
// Read an integer from a line of text read from cin, with error
// checking. Initial prompt shold be printed before calling this
// function. Returns the integer typed.
int readInt() {
    while (true) {
        // Input a line
        string line;
        getline(cin, line);

        // Get int from line
        istringstream in(line);
        int num;
        in >> num;

        // Error check
        if (!in) {
            cout << "Try again. Please type an integer: ";
            continue;
        }
        return num;
    }
}

// Main program
// Create a dataset, and do searches in it.
int main() {
    while (true) {

        // Get size of dataset
        cout << "Dataset size (0 to end): ";
        int size = readInt();
        cout << endl;
        if (size <= 0)
            break;

        // Make the parallel vectors associative dataset
        cout << "Creating dataset ..." << endl;
        // TODO CREATE DATASET HERE!!! *****************************
        vector<int> Dataset;
        
        srand((unsigned)time(NULL));
        for (int i =0; i <= size; i++){
                int b = rand() % size; // For some nice small integers
                Dataset.push_back(b);
                cout << Dataset[i] << endl;
            }
       
        sort(Dataset.begin(), Dataset.end());
        
        
        
          for (int i =0; i <= size; i++){
              cout << Dataset[i] << " ";
          }
        
        vector<int> keys;

        for (int i =0; i <= size; i++){
         keys.push_back(i);
        }
    
        int thevalue;

        int thekey;
        // *********************************************************
        cout << "Dataset created" << endl;

             cout << "What would you like to seach for: ";
        cin >> thekey;
        // Wait for user
        cout << "Press ENTER to search ";
        string dummy;
        getline(cin, dummy);
        cout << endl;

        // time the searches
        clock_t timer = clock();

        // Do searches
        // TODO BINARY SEARCH HERE!!! ******************************

     cout <<  binarySearch (keys, Dataset,thekey,thevalue);


        
        // *********************************************************
       timer = clock() - timer;
        cout << "Binary Search DONE: " << endl;
        printf("  approximately %f seconds", (float) timer / CLOCKS_PER_SEC);
        cout << endl;
        cout << endl;

       timer = clock();
        // TODO SEQUENTIAL SEARCH HERE!!! **************************

        cout << sequentialSearch(keys, Dataset,thekey,thevalue);
        
        
        

        // *********************************************************
       timer = clock() - timer;
        cout << "Sequential Search DONE" << endl;
        printf("  approximately %f seconds", (float) timer / CLOCKS_PER_SEC);
        cout << endl;
        cout << endl;
    }
}
