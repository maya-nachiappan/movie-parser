//
//  movie.hpp
//  movie parser
//
//  Created by maya nachiappan on 11/8/24.
//

#ifndef movie_hpp
#define movie_hpp

#include <stdio.h>
#include <string>

// Define the Movie structure
struct Movie {
    std::string episode;
    short year;
};

// Function declaration to parse the string into a Movie structure
Movie parseMovieString(const std::string& input);

#endif /* movie_hpp */
