/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Purpose: Read 4 digit character then output star base on numbers
 * Created on October 17, 2016, 5:40 PM
 */

#include <iostream>
using namespace std; 
  
  int main(int argc, char** argv)
  {
    //Declare variable 
char number [4];
char output=0;

for( int i = 0; i < 4; i++ )
    {
        cout << "Please enter 4 numbers: " << i + 1 << endl;
        cin >> number[i];
    }

for( int i = 0; i < 4; i++ )
    {
        if ( isalpha( number[i]) )
        cout << '?';//If alphabet then output ? mark
        else
        for (int j = 0; j < number[i] - '0'; j++ )
        cout << '*';//If number then output *

        cout << endl;
    }

return 0;
}

