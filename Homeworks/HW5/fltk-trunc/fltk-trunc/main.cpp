//
//  main.cpp
//  fltk-trunc
//
//  Created by Stefano Fochesatto on 11/3/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//
#include"truncstruct.hpp"
#include <iostream>
#include <sstream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Int_Input.H>

StringInfo User_input;
Fl_Output* Output = nullptr;

//Callback Functions


void truncate_Pressed(Fl_Widget* widget, void* data)
{
    Output->value(trunc(User_input).str.c_str());
}


void quit_Pressed(Fl_Widget* widget, void* userdata)
{
    if (!userdata) return;
    Fl_Window* window = (Fl_Window*)userdata;
    window->hide();
}


void String_input(Fl_Widget* widget, void* data)
{
    Fl_Input* input = (Fl_Input*)widget;
    User_input.str = input->value();
}


void Int_input(Fl_Widget* widget, void* data)
{
    Fl_Int_Input* entry = (Fl_Int_Input*)widget;
    std::string str = entry->value();

    std::istringstream instream(str);
    if (instream)
    {
        instream >> User_input.len;
    }
}



int main(int argc, char **argv) {
Fl_Window *window = new Fl_Window(500,400);
    
    //GUI Elements
    Fl_Button *button_truncate= new Fl_Button(20,300,300,40,"TRUNCATE");
    button_truncate->callback(truncate_Pressed);
  
    Fl_Button *button_quit= new Fl_Button(400,300,40,40,"QUIT");
    button_quit->callback(quit_Pressed, (void*)window);
    
    
    
    
    Fl_Box* UserStringlabel = new Fl_Box(20,10,300,25,
        "Type the word you want to truncate.");
    UserStringlabel->labelfont(FL_NORMAL_LABEL);
    UserStringlabel->labelsize(15);
    UserStringlabel->labeltype(FL_NORMAL_LABEL);
    
    Fl_Input *input_UserString = new Fl_Input(20,40,300,25);
    input_UserString->callback(String_input);
    
    
    
    
    Fl_Box* UserIntlabel = new Fl_Box(20,70,300,25,
        "Length of new word.");
    UserIntlabel->labelfont(FL_NORMAL_LABEL);
    UserIntlabel->labelsize(15);
    UserIntlabel->labeltype(FL_NORMAL_LABEL);
    
    Fl_Int_Input *input_UserInt = new Fl_Int_Input(20,100,300,25);
    input_UserInt->callback(Int_input);
    
    
    
    
    Fl_Box* Outlabel = new Fl_Box(20,130,300,25,
        "New word.");
    Outlabel->labelfont(FL_NORMAL_LABEL);
    Outlabel->labelsize(15);
    Outlabel->labeltype(FL_NORMAL_LABEL);
    Output = new Fl_Output(20,150,300,25);
    
  window->end();
  window->show(argc, argv);
return Fl::run();
}
