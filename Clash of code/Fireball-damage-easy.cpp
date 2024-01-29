/*  This code was written by Gergana Karabelyova as an exercise 
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int health;
    cin >> health; cin.ignore();
    int level;
    cin >> level; cin.ignore();
    int damage=200+(level-1)*20;

    if(health-damage<=0) cout << "hehehehaw " << health-damage << endl;
    else cout<< "rawr " << health-damage << endl;

    
}

/*

It is the end of a Clash Royal match, and to win, you have to summon a fireball and hit the enemy tower so it gets destroyed! A level one fireball deals 200 damage. Each level higher adds 20 to the damage. Figure out if you can win just in time!

P.S.: if the enemy tower has 0 health, you win!
Input
Line 1: An integer health: your enemy's tower's health
Line 2: An integer level: your rocket level
Output
Line 1: a string of hehehehaw if you win, or rawr if you lose.
followed by a space, and then: an integer for the enemy tower's health left
Constraints
1 <= health <= 1000
1 <= level <= 30
Example
Input
250
12
Output
hehehehaw -170


*/