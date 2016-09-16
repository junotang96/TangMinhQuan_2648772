/* 
   File:   main
   Author: Minh Quan Tang
   Created on September 15, 2016, 5:08 PM
   Purpose: Count the number of coin
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int quar=25, dim=10, nick=5, total;
    //Input values
   cout<<"Enter the number of quarters, dimes and nickels:\n";cin>>quar>>dim>>nick;
   
   total = 25 * quar + 10 * dim + 5 * nick; //total in cents
   cout<<"The coins are worth ";if (total >= 100) {cout<<total / 100<<" dollar(s) "; }
   cout<<total % 100<<" cents\n";
   
   return 0;
}


