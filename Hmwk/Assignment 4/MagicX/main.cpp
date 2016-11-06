/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Purpose: Create X with number
 * Created on October 17, 2016, 5:20 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
//Declare Variables 
int X;

    cout << "Input a positive number." << endl;
    cin >> X; 
    cout << endl;

    //Input Validation 
    while (X<0) {
    cout << "Invalid entry. Enter a number greater than 0." << endl;
    cin >> X ; 
    }

    //This section makes the X 
    for (int r=1; r<=X; r++) {
    for (int c=1; c<=X; c++){
    if(r==c||c==(X+1)-r) cout << X;
    else cout << " "; 
    }
    cout << endl;
    }

return 0;
}
