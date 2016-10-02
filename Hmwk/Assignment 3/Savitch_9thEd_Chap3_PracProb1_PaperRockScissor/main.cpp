/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Purpose: Play paper-rock-scissor game
 * Created on September 30, 2016, 2:15 PM
 */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
char p1, p2;
string check;
do
{
cout << "Player 1, please enter your choice [P/R/S]" << endl;
cin >> p1;
cout << "Player 2, please enter your choice [P/R/S]" << endl;
cin >> p2;
		
p1 = toupper(p1);
p2 = toupper(p2);
if	(p1 == p2)
cout << "Nobody wins" << endl;
else
{
switch (p1)
{
case 'P':
if	(p2 == 'R')
cout << "Paper covers rock, Player 1 wins" << endl;
else
cout << "Scissors cut paper, Player 2 wins" << endl;
break;
				
case 'R':
if	(p2 == 'S')
cout << "Rock breaks scissors, Player 1 wins" << endl;
else
cout << "Paper covers rock, Player 2 wins" << endl;
break;	
				
case 'S':
if	(p2 == 'P')
cout << "Scissors cut paper, Player1 wins" << endl;
else
cout << "Rock breaks scissors, Player 2 wins" << endl;
break;
}
}
cout << "Do you want to continue? [y/n]" << endl;
cin >> check;
}while(check != "n");

return 0;
}