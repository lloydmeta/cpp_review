//
//  user.cpp
//  tutorial_cpp
//
//  Created by A13075 on 2013/02/11.
//  Copyright (c) 2013年 A13075. All rights reserved.
//

#include "user.h"
#include "movie.h"

using namespace std;

User::User(string inpFirstName, string inpLastName){
    if (inpFirstName.empty() || inpLastName.empty()){
        throw "First name or last name empty";
    };

    firstName = inpFirstName;
    lastName = inpLastName;
};

User::User(){
    firstName = "";
    lastName = "";
}

void User::welcomeUser(){
    cout << "Welcome, " << firstName << " " << lastName << "\n";
};

User User::createUserFromCommandLine(){
    string firstName;
    string lastName;
    cout << "Please input a first name for your user: ";
    cin >> firstName;
    cin.ignore();
    cout << "Please input a last name for your user: ";
    cin >> lastName;
    cin.ignore();
    User user(firstName, lastName);
    return user;
};