/*
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Purpose: Read maximum room capacity
 * Created on September 24, 2016, 2:11 PM
 */

#include <iostream> 
using namespace std;

int main ()
{

int number;
int roomcapacity;
char choice ;

do
{
cout << "Enter the room capacity :";
cin >> roomcapacity;
cout << "Enter number of people in the meeting :";
cin >> number;

if(number <= roomcapacity)
cout << "You can hold the meeting legally!";
else if (number > roomcapacity)
{
cout <<"Warning! you can't hold the meeting," << endl;
cout << "But if you still want to hold the meeting you have to exclude: " << (number - roomcapacity) << " guest(s)"; 
}

cout << endl << endl << "Do you want to run the program again? <y/n> ";
cin >> choice;
cout << endl << endl;
}
while ( choice =='y' || choice == 'Y');

cout << "\nEnd of Program\n\n"; 
return 0;
}

