// printtime.cpp  INCOMPLETE
// Glenn G. Chappell
// 20 Apr 2018
//
// For CS 201 Spring 2018
// Time of Day Class & Program
//
// Modified 11/28/18 for CS 201 Fall 2018
// Chris Hartman

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;


// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {

public:
// ***** Time: constructors *****
    Time() : _hr{12} ,_min{0} ,_sec{0} {}

    // TODO: Put something here!

// ***** Time: general public member functions *****
    
    void hr(int n){
        _hr = n;
    }
    void min(int n){
        _min = n;
    }
    void sec(int n){
        _sec = n;
    }
    
    void print() const
    {
        
        cout << std::setfill ('0') << std::setw (2) << _hr << ":" << std::setfill ('0') << std::setw (2)<< _min << ":" << std::setfill ('0') << std::setw (2) << _sec;  // DUMMY
        // TODO: Write this!
    }

// ***** Time: data members *****
private:

    int _hr;   // Hours past midnight
    int _min;  // Minutes past the hour
    int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
    // Print header
    cout << "Here are some times:" << endl;
    cout << endl;

    
    // Make a Time object; print it
   
      Time t2;
      cout << "Time #1: [";
      t2.print();
      cout << "]" << endl;
      cout << endl;

    
    
    
    
    
    
    
    
    Time t1;
    t1.hr(9);
    t1.min(30);
    t1.sec(34);
    cout << "Time #2: [";
    t1.print();
    cout << "]" << endl;
    cout << endl;

    
    
    
    
    
    
    
    
    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n') ;
}
