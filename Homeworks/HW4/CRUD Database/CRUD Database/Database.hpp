//
//  Database.hpp
//  CRUD Database
//
//  Created by Stefano Fochesatto on 12/8/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef Database_hpp
#define Database_hpp

#include <stdio.h>
#include <string>
#include <map>
#include <iostream>
#include <sstream>
#include <iomanip>
struct Database_record
{
    std::string student_Name{"Student"};
    double assignment_Scores[30] = {[0 ... 29] = 0};
    double student_Final{0.0};
    bool passFail{false};
};

bool CreateRecord(const std::string &key);
bool ReadRecord(const std::string &key, const Database_record &record);
bool UpdateRecord(const std::string &key,const Database_record &record);
bool DeleteRecord(const std::string &key);
bool InputRecord(Database_record &record);
void PrintRecord(const std::string &key);


#endif /* Database_hpp */
