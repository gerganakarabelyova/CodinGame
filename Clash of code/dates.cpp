/*  This code was written by Gergana Karabelyova as an exercise 
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

using namespace std;

int main() {
    string date1, date2;
    cin >> date1; cin.ignore();
    cin >> date2; cin.ignore();

    std::tm t = {}; // creating an onject of a special tm structure type, working with
                    // and accepting time-related data like days, years, secs etc.
    std::tm t2 = {}; // two variables for the 2 dates

    std::istringstream ss(date1);
    ss >> std::get_time(&t, "%Y-%m-%d"); // get_time converts a string to a tm structure time type

    std::istringstream ss2(date2);
    ss2 >> std::get_time(&t2, "%Y-%m-%d");

    if (ss.fail() || ss2.fail()) {
        std::cerr << "Date parsing failed!" << std::endl;
        return 1;
    }

    std::time_t time1 = std::mktime(&t); // converting tm structure type to
                                // to time_t, which is needed for the difftime function
                                // which will be calculating the difference between the 
                                // two dated
    std::time_t time2 = std::mktime(&t2);

    time_t diff = difftime(time1, time2)/86400; // divided by 86400 so it turns seconds (that is what)
                            // difftime returns) to days
    cout<<"Difference is: "<<abs(diff)<<" days"<<endl;
            // abs is a function that converts any number, positive or negative
            // to it's absolute value - a positive number

    return 0;
}

/*

• Michel wants to know how many days there are between two dates. Please, help him find that number.
Use the Gregorian calendar.

- If the result is under 0 you need to return "error".
- If any date it's not valid, you need to return "Invalid Date"
Input
Line 1: The most recent date DATE1 (mm-dd-yyyy)
Line 2: The most oldest date DATE2 (mm-dd-yyyy)
Output
Line 1: A number of days
Constraints
DATE1 = date in the format (mm-dd-yyyy)
DATE2 = date in the format (mm-dd-yyyy)
Example
Input
12-13-1989
12-21-1973
Output
5836

*/