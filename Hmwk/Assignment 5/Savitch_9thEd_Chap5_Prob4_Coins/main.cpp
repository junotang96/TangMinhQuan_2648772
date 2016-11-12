/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 9th, 2016, 4:21 PM
   Purpose:  
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
     
     //cents
     int cents = 0;
     
     // getting user input
     cout << "Enter the change of cents: ";
     cin >> cents;
     
     //varibales to store different denominations
     int quarters = 0;
     int dimes = 0;
     int nickels = 0;
     int pennies = 0;
     
     cout<<"After conversion: "<<endl;
     // checking 
     while (cents >= 25) {
           quarters++;
           cents -= 25;
     }
     while (cents >= 10) {
           dimes++;
           cents -= 10;
     }
     while (cents >= 5) {
           nickels++;
           cents -= 5;
     }
     while (cents >= 1) {
           pennies++;
           cents -= 1;
     }
     
     // printing the values on screen
     cout << "Number of Quarters: " << quarters << endl;
     cout << "Number of Dimes: " << dimes << endl;
     cout << "Number of Nickels: " << nickels << endl;
     cout << "Number of Pennies: " << pennies << endl;      
     

     return 0;
}
