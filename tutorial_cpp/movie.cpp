//
//  movie.cpp
//  tutorial_cpp
//
//  Created by A13075 on 2013/02/11.
//  Copyright (c) 2013年 A13075. All rights reserved.
//

#include <iostream>
#include "movie.h"

using namespace std;

Movie::Movie(string movieTitle){
    title = movieTitle;
}

void Movie::sayTitle() {
    cout << "The title is: ";
    cout << title << endl;
};

Movie Movie::operator=(Movie dupMovie){
    title = dupMovie.title;
};