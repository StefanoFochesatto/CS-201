//
//  Database.cpp
//  CRUD Database
//
//  Created by Stefano Fochesatto on 12/8/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#include "Database.hpp"


//Cool formatting library pulled from github all credit for this goes to "https://github.com/haarcuba/cpp-text-table/blob/master/TextTable.h"
#include "TextTable.h"



bool getInt(int & num)
{
    std::string input;

    getline(std::cin, input);
    std::istringstream instream(input);
    instream >> num;

    if (instream)
        return true;
    else
        return false;
}


std::map<std::string, Database_record> Database_student;



bool CreateRecord(const std::string &key){
    auto it = Database_student.find(key);
    if (it == Database_student.end()){
        Database_record initial;
        Database_student.insert({key,initial});
        return true;
    }
    else
        std::cout <<"ERROR Dupl Record"<< std::endl;
        return false;
}



bool ReadRecord(const std::string &key, Database_record &record){
    auto it = Database_student.find(key);
      if (it == Database_student.end()){
      std::cout <<"ERROR Key Not Found"<< std::endl;
        return false;
      }
    else
        record = Database_student[key];
        return true;
}


bool UpdateRecord(const std::string &key,const Database_record &record){
    auto it = Database_student.find(key);
         if (it == Database_student.end()){
             std::cout <<"ERROR Key Not Found"<< std::endl;
             return false;
         }
    Database_student[key] = record;
    return true;
}






bool DeleteRecord(const std::string &key){
      auto it = Database_student.find(key);
           if (it == Database_student.end()){
               std::cout <<"ERROR Key Not Found"<< std::endl;
               return false;
           }
    Database_student.erase(key);
    return true;
}


bool InputRecord(Database_record &record){
      auto it = Database_student.find(record.student_Name);
    if (it == Database_student.end()){
        Database_student.insert ( std::pair<std::string,Database_record>(record.student_Name,record));
                  return true;
              }
   else
        std::cout <<"Duplicate key found!!!"<< std::endl;
        return false;
}






void PrintRecord(const std::string &key){
   auto it = Database_student.find(key);
      if (it != Database_student.end()){
    
    TextTable t( '-', '|', '+' );
    t.add( "Name" );
  //  t.add( "Assignment Scores" );
    t.add( "Final Grade" );
    t.add( "Pass/Fail" );
    t.endOfRow();
    
    for(const auto & p : Database_student){
            if (p.first == key){
                t.add(p.first);
                t.add(std::to_string(p.second.student_Final));
                if (p.second.passFail){
                t.add("Fail");
                }
                else{
                t.add("Pass");
                }
                
                
            }
        }
       t.endOfRow();
     t.setAlignment( 4, TextTable::Alignment::RIGHT );
       std::cout << t;
      }
    
    
    
    
    
//    std::cout << "Name" <<std::setw(26)<<"AssignmentScores"<<std::setw(26)<<"FinalGrade"<<std::setw(26)<<"Pass/Fail"<<std::endl;
////    for(const auto & p : Database_student){
////        if (p.first == key){
////            std::cout << p.first;
////            for (const auto &i:p.second.assignment_Scores){
////                std::cout<<i<<std::endl;
////            }
////            std::cout <<p.second.student_Final;
////            std::cout <<p.second.passFail;
////        }
////    }
    //                std::string s;
    //                for (const auto &i:p.second.assignment_Scores){
    //                    s+= std::to_string(i) + ", \n" ;
    //                 }
    //                t.add(s);
}
