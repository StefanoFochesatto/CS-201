//
//  main.cpp
//  CRUD Database
//
//  Created by Stefano Fochesatto on 12/8/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//


#include "Database.hpp"

std::random_device rd{};
std::mt19937 gen{rd()};
std::normal_distribution<double> d{65,30};

int main(int argc, const char * argv[]) {
     Database_record users_input;
    int menuchoice = 0;
        while (menuchoice != 5)
        {

            //Main Menu that opens into submenus
            std::cout << std::endl
                << "Please select one of the following options:" << std::endl
                << "\t 1. Create" << std::endl
                << "\t 2. Read" << std::endl
                << "\t 3. Update" << std::endl
                << "\t 4. Delete" << std::endl
                << "\t 5. Exit" << std::endl;

            //Collects input and handles errors
            if (getInt(menuchoice))
            {
                switch (menuchoice)
                {
                    case 1:{
                        std::cout<<"Please enter a students name: "<<std::endl;
                        std::string name;
                        std::getline (std::cin,name);
                        CreateRecord(name);
                    break;
                    }
                    case 2:{
                        std::cout<<"Please enter a students name: "<<std::endl;
                        std::string name_;
                        std::getline (std::cin,name_);
                        ReadRecord(name_, users_input);
                        PrintRecord(name_);
                    break;
                    }
                    case 3:{
                        std::cout<<"Please enter a students name: "<<std::endl;
                        std::string name_;
                        std::getline (std::cin,name_);
                        std::cout<<"Generating Assignment Data "<<std::endl;
                          
                        std::vector<double> arr;
                              for (int j=0; j<=29; j++) {
                                 double number = d(gen);
                                  arr.push_back(number);
                              }
                              
                          double sum = 0.0;
                              for (int j=0; j<= arr.size()-1; j++){
                              sum += arr[j];
                              }
                              double Final = (sum/sizeof(arr));
                             bool passfail = (Final<69);
                        
                              Database_record Generator = {
                              .student_Name = name_,
                              .assignment_Scores = arr,
                              .student_Final = Final,
                              .passFail = passfail
                            };
                              UpdateRecord(name_, Generator);
                    break;
                    }
                    case 4:{
                        std::cout<<"Please enter a students name: "<<std::endl;
                        std::string name_;
                        std::getline (std::cin,name_);
                        DeleteRecord(name_);
                    break;
                    }
                    case 5:{
                        break;
                    }
                    default:{
                    std::cout << "Please enter one of the numbers listed."
                        << std::endl;
                    }
                    }
            }
            else
            {
                std::cout << "Please enter an integer." << std::endl;
                continue;
            }

}

    
    
    
    

    //Creating data
    //Initilizing students
    std::string Student_Names [9] =
    {"David",
    "John",
    "Paul",
    "Mark",
    "James",
    "Andrew",
    "Scott",
    "Steven",
    "Robert"};
    
    //Initilizing Records
    for (int i = 0; i<= 8;i++){
      CreateRecord(Student_Names[i]);
    }
    
    //Generating assignment data
    
    for(int i = 0; i<=8; i++){
        std::vector<double> arr;
        for (int j=0; j<=29; j++) {
           double number = d(gen);
            arr.push_back(number);
        }
        
    double sum = 0.0;
        for (int j=0; j<= arr.size()-1; j++){
        sum += arr[j];
        }
        double Final = (sum/sizeof(arr));
       bool passfail = (Final<69);
  //Updating records with new assignment Data
    
        
        Database_record Generator = {
        .student_Name = Student_Names[i],
        .assignment_Scores = arr,
        .student_Final = Final,
        .passFail = passfail
      };
       
        
        UpdateRecord(Student_Names[i], Generator);
    }

    
    //Printing new records
    for (int i = 0; i<= 8; i++){
        PrintRecord(Student_Names[i]);
    }
    
    //deleting all but one of the records
    std::cout<<"deleting all but one of the records"<<std::endl;
    for (int i = 0; i<= 7; i++){
         DeleteRecord(Student_Names[i]);
     }
    
    //Reprinting all records
    std::cout<<"Reprinting all records"<<std::endl;
    for (int i = 0; i<= 8; i++){
        PrintRecord(Student_Names[i]);
    }
    
    return 0;
}
