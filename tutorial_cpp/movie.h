//
//  movie.h
//  tutorial_cpp
//
//  Created by A13075 on 2013/02/11.
//  Copyright (c) 2013年 A13075. All rights reserved.
//

#ifndef tutorial_cpp_movie_h
#define tutorial_cpp_movie_h
#include <string>

using namespace std;

class Movie{
    string title;
public:
    Movie (string title);
    Movie ();
    void sayTitle();
    Movie operator= (Movie);
};


#endif
