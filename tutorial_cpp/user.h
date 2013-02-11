//
//  user.h
//  tutorial_cpp
//
//  Created by A13075 on 2013/02/11.
//  Copyright (c) 2013年 A13075. All rights reserved.
//

#ifndef tutorial_cpp_user_h
#define tutorial_cpp_user_h
#include <string>
#include <iostream>
#include "movie.h"

using namespace std;

class User {
    string firstName, lastName;
public:
    static User createUserFromCommandLine();
    User (string, string);
    User ();
    void setMovie(Movie);
    void welcomeUser();
};

#endif
