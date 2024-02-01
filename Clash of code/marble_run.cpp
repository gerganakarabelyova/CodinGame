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
    int h; // height of the marble run
    int w; // width of the marble run
    int x; // column where the marble starts
    cin >> h >> w >> x; cin.ignore();
    int current=x;

    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);

        vector <char> stringy;
        size_t len = row.size();

        for(int i=0; i<len; i++){
            stringy.push_back(row[i]);
        }
        if(stringy[current]=='/') current -=1;
        if(stringy[current]=='\\') current +=1;
    }
    cout<<current<<endl;
}
/*
You are given a "marble run": a table of bars which will guide a marble during its fall.
When a marble falls on a "\" bar, it rolls on the right. When it falls on a "/" bar, it rolls on the left.
The marble has no inertia. That is, it will fall vertically if not on a bar.
You are given the column at which the marble enters the run. Find out on which column it will be at the end of the run!
It is guaranteed that the marble will stay inside the run, and that it will not be blocked by the bars. That is, a whitespace is always present on left of "/" and on right of "\".
Input
Line 1: Three space-separated integers H, W and x. H is the height of the marble run. W is its width. x is the column where the marble starts (between 0 and W-1).
Next H Lines: string Row of length W composed of " ", "\" or "/" representing a row of the run
Output
Line 1: Column in which the marble will finish the run (between 0 and W-1)
Constraints
0 ≤ H < 100
0 ≤ W < 100
0 ≤ x < W
Example
Input
6 8 0
\      /
 \    /
   /\
  /  \
       /
\     /
Output
1
*/
