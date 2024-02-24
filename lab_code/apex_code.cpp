//
//
#include <iostream>
#include <sstream>
#include "apex_code.h"

using namespace std;

void minutes_to_12hour_time(stringstream &cin, stringstream &cout) {
    // Place code for translating minutes to 12 hour time
    // Pretend this is your main function and you can use cin/cout
    // as you would in main.

    // If you want to print to the console for debugging use std::cout.
    // Use cout for your final solution.

    // First you want to get user input with cin
    int minutesIn;
    int hoursOut, minutesOut;
    cin >> minutesIn;
    
    // Do any needed calculations
    hoursOut = minutesIn / 60;
    minutesOut = minutesIn % 60;
    
    // Create output with cout
    cout << hoursOut << ":" << " !";
}

void numbers_to_12hour_time(stringstream& cin, stringstream& cout)
{
    // Place code for translating hours, minutes and seconds to 12 hour time
    // Pretend this is your main function and you can use cin/cout
    // as you would in main.

    // If you want to print to the console for debugging use std::cout.
    // Use cout for your final solution.
}
