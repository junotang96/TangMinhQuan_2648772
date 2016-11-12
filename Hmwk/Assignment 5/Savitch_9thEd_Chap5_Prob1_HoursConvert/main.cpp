/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 9th, 2016, 12:55 PM
   Purpose: Converts hour notation
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//all functions call-by-reference to allow them to modify variables directly
void input(int&, int&, char&);
void convert(int&, int&, char&);
void output(int&, int&, char&);

int main()
{
	int hours, minutes;
	char ampm; //this will hold a character that allows the program to tell if it's AM or PM
	char again; //store user's choice if they want to re-run program
		
	//loop to re-run program as long as user wants
	do
	{
		//call the 3 fucntions in turn
		input(hours, minutes, ampm);
		convert(hours, minutes, ampm);
		output(hours, minutes, ampm);
		
		cout << endl << "Enter Y to run again, any other key to exit: ";
		cin >> again;
	}
	while(again == 'y' || again == 'Y');
	
	return 0;
}

void input(int& hours, int& minutes, char& ampm)
{
	//this loop makes sure value entered is legal for hours(i.e. 23 or below)
	do
	{
		cout << "Enter hours: ";
		cin >> hours;
		if(hours > 23) cout << "Please enter a value between 0 and 23" << endl;
	}
	while(hours > 23);
	
	//this loop makes sure value entered is legal for minutes (i.e. 59 or below)
	do
	{
		cout << "Enter minutes: ";
		cin >> minutes;
		if(minutes > 59) cout << "Please enter a value between 0 and 59" << endl;
	}
	while(minutes > 59);
}

void convert(int& hours, int& minutes, char& ampm)
{
	//set AM/PM flag to PM if hour is 13 onwards, and set hours to 12hr format
	if(hours > 12)
	{
		hours = hours - 12;
		ampm = 'p';
	}
	else if(hours == 12) ampm = 'p'; //set AM/PM flag to PM if hour is 12 exactly, since 12 lunch time is classed as PM
	else ampm = 'a'; //if neither of above true, must be AM
}

void output(int& hours, int& minutes, char& ampm)
{
	if(ampm == 'p')
	{
		if(minutes < 10) cout << hours << ":0" << minutes << " P.M."; //adds leading 0 if minutes is 1-9
		else cout << hours << ":" << minutes << " P.M.";
	}
	else
	{
		if(minutes < 10) cout << hours << ":0" << minutes << " A.M."; //adds leading 0 if minutes is 1-9
		else cout << hours << ":" << minutes << " A.M.";
	}
}
