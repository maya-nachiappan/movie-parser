//
//  movie.cpp
//  movie parser
//
//  Created by maya nachiappan on 11/8/24.
//

#include "movie.hpp"
#include <sstream>
#include <iostream>

using namespace std;

// Function definition to parse the string into a Movie structure
Movie parseMovieString(const string& input) {
    Movie movie;

    // Creates a stringstream to process the input string
    stringstream ss(input);

    // Parses the episode part before the comma
    getline(ss, movie.episode, ','); 

    size_t pos = movie.episode.find_first_not_of(" \t");
    if (pos != string::npos) {
        movie.episode = movie.episode.substr(pos);
    }
    string yearStr;
    getline(ss, yearStr);

    // Converts the year string to a short integer
    movie.year = static_cast<short>(stoi(yearStr));

    return movie;
}
