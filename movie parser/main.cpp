//
//  main.cpp
//  movie parser
//
//  Created by maya nachiappan on 11/8/24.
//

#include <iostream>
#include <iostream>
#include "movie.hpp"

using namespace std;

int main() {
    
    string input = "24 s2,2014";

    // Parses the string into a Movie structure
    Movie parsedMovie = parseMovieString(input);

    // Outputs the results
    cout << "Episode: " << parsedMovie.episode << endl;
    cout << "Year: " << parsedMovie.year << endl;

    return 0;
}
