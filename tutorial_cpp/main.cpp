//
//  main.cpp
//  tutorial_cpp
//
//  Created by A13075 on 2013/02/11.
//  Copyright (c) 2013年 A13075. All rights reserved.
//

#include <iostream>
#include "movie.h"
#include "user.h"

using namespace std;

int main(int argc, const char * argv[])
{
    string movieName;
    string command;
    User user;
    Movie *movie;
    while (command != "exit"){
        cout << "Please input a command: ";
        cin >> command;
        cin.ignore();
        if (command == "movie"){
            cout << "Please input a name for your movie: ";
            getline(cin, movieName);
            movie = new Movie(movieName);
            movie->sayTitle();
        }
        else if (command == "user"){
            user = User::createUserFromCommandLine();
            user.welcomeUser();
        };

    }
    cout << "Goodbye!";
    return 0;
}

