/*  This code was written by Gergana Karabelyova as an exercise 
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    int max=0;
    int imax=0;


    // game loop
    while (1) {
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            if(mountain_h>max){
                max=mountain_h;
                imax=i;
            }
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << imax << endl; // The index of the mountain to fire on.
        max=0;
        
    }
}



/*

Destroy the mountains before your starship collides with one of them. For that, shoot the highest mountain on your path.
 	Rules
At the start of each game turn, you are given the height of the 8 mountains from left to right.
By the end of the game turn, you must fire on the highest mountain by outputting its index (from 0 to 7).

Firing on a mountain will only destroy part of it, reducing its height. Your ship descends after each pass.  
 
Victory Conditions
You win if you destroy every mountain
 
Lose Conditions
Your ship crashes into a mountain
You provide incorrect output or your program times out
 	Note
Don’t forget to run the tests by launching them from the “Test cases” window. The tests provided and the validators used to calculate your score are slightly different to avoid hard-coded solutions.
 	Game Input
Within an infinite loop, read the heights of the mountains from the standard input and print to the standard output the index of the mountain to shoot.
Input for one game turn
8 lines: one integer mountainH per line. Each represents the height of one mountain given in the order of their index (from 0 to 7).
Output for one game turn
A single line with one integer for the index of which mountain to shoot.
Constraints
0 ≤ mountainH ≤ 9
Response time per turn ≤ 100ms

*/