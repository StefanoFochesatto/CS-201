//
//  student.hpp
//  Separate Class and Header Source Files
//
//  Created by Stefano Fochesatto on 12/2/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#include <string>
#include <stdlib.h>
#include <time.h>


class Student {
public:
   
    //Constructors for various inputs.
    Student() : name_("Unknown"), id_(0){
    }
    
    
    int number = rand() % 9000 + 1000; // Assign random 4 digit id number
    Student(const std::string& User_str) : name_(User_str), id_(number){
    }
    
    Student(const std::string& User_str, const int& num) : name_(User_str), id_(num){
    }
    
    //prototype for rest for member funcitons
    void printInfo() const;

private:
    
    //data memebers
    std::string name_;
    int id_;
};
#endif /* student_hpp */
