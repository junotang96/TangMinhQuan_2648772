/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 18th, 2016, 10:05 AM
   Purpose:  
 */

#include <iostream>
#include <string>

using namespace std;
int main()
{
    char Seat = ' ';
    string Airline[7] = {"1ABCD", "2ABCD", "3ABCD", "4ABCD", "5ABCD", "6ABCD", "7ABCD"};
    char Again = ' ';
    int Row = 0;
  
    Again = 'y';
  
    while(Again == 'y')
    {
                cout << "Enter a row: ";
                cin >> Row;
                cout << "Enter a seat: ";
                cin >> Seat;
               
                        int idx = 1 + Seat - 'A';
                        if(Airline[Row-1][idx] == 'X') { //checks if seat is taken or not
                               cout << "Seat is taken." << endl;
                               continue; }
                        else
                               Airline[Row - 1][idx] = 'X';
                               cout << "Enter another seat? (y/n): ";
                               cin >> Again;
                               
               for(int i=0; i<7; ++i)
               {
		               cout << Airline[i] << endl;
               }
               
    } //end while
   
   
    return 0;
}

