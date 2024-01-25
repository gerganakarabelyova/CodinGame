/*  This code was written by Gergana Karabelyova as an exercise 
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

    int closest{0};

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        if(i==0) closest=t;
        // closest = -5
        // t=5
        if(abs(t)<abs(closest)) closest=t;
        if((t==abs(closest) || abs(t)==closest) && (t<0 || closest<0)) closest=abs(t);
    }
    cout << closest << endl;
}



/*

In this exercise, you have to analyze records of temperature to find the 
closest to zero.

	
Sample temperatures
Here, -1 is the closest to 0.
 	Rules
Write a program that prints the temperature closest to 0 among input 
data. If two numbers are equally close to zero, positive integer has 
to be considered closest to zero (for instance, if the temperatures 
are -5 and 5, then display 5).
 	Game Input
Your program must read the data from the standard input and write the 
result on the standard output.
Input
Line 1: N, the number of temperatures to analyze

Line 2: A string with the N temperatures expressed as integers ranging 
from -273 to 5526

Output
Display 0 (zero) if no temperatures are provided. Otherwise, display the 
temperature closest to 0.
Constraints
0 ≤ N < 10000
Example
Input
5
1 -2 -8 4 5
Output
1

*/