/* 
   File:   main
   Author: Minh Quan Tang
   Created on October  19th, 2016, 3:21 PM
   Purpose: Calculate subscription packages
 */

//System Libraries
#include <iostream>
#include <string>

using namespace std;

int main() {
    
 string package;
 float time;
 float price;
 
     cout <<"\nA)  $16.75 per month, 5 hours access. Additional hours are $0.85 up to 20 hours then $1 for all additional hours. \nB)  $23.75 per month, 15 hours access.  Additional hours are $0.65 up to 25 hours then $0.75 for each hour above this limit.\nC)  $34.95 per month unlimited access";
     cout << "\nChoose package: ";
     cin >> package;
     
          // Package validation
     if ((package == "A") || (package == "B") || (package == "C")) {
         cout << "The number of hours: ";
         cin >> time;
         
         // Time validation
     if (time <= 744) {
         
        // Package A
    if (package == "A") {
    if (time > 5) {
        price = 16.75 + (time - 6 + 0.85);
    } else if (time > 20) {
        price = 16.75 + (time - 21 + 1);
    } else {
        price = 16.75;
        }
        // Package B
    } else if (package == "B") {
    if (time > 15) {
        price = 23.75 + (time - 16 + 0.65);
    } else if (time > 25) {  
         price = 16.75 + (time - 26 + 0.75);
    } else {
        price = 23.75;
        }
    
        // Package C
    } else {
        price = 34.95;
        }
     } else {
        cout << "Invalid number of hours!";
         }
     } else {
         cout << "Invalid package!";
        }
        cout << "Price: $" << price;
        if (time >= 25)
            cout <<"\nYou should switch to package C"<<endl;
    
        //Exit 
    return 0;
}