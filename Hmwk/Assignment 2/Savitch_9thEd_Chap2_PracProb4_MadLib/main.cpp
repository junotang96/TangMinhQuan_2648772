/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Purpose: plays the game of Mad Lib
 * Created on September 25, 2016, 9:36 AM
 */

#include<iostream>
#include <string>
using namespace std;

//main function
int main()
{  
     //Declaration the variables
    string instructor, Name, food, adjective, color, animal;
	double number;

    //Get the required data from user
	cout<<"Enter your instructor name:\n";
	cin>>instructor;
	
	cout<<"Enter your name:\n";
	cin>>Name;
	
    cout<<"Enter a food:\n";
 	cin>>food;
	
    cout<<"Enter a number between 100 and 120:\n";
	cin>>number;
	
	cout<<"Enter an adjective:\n";
	cin>>adjective;
	
    cout<<"Enter a color:\n";
	cin>>color;

	cout<<"Enter a animal:\n";
	cin>>animal;

	//Dispaly story after substituting the input values
	cout<<"Dear Instructor "<< instructor <<",";
	cout<<"\n\n I am sorry that I am unable to turn in my homework at this time.\n First, I ate a rotten "<< food ;
	cout << " ,which made me turn " << color <<" and extremely ill.\n I came down with a fever of "<< number ;
	cout<<".Next, my "<< adjective << " pet " << animal ;
	cout<<"must have smelled the remains of the "
          << food <<" on my homework, because he ate it."; 
	cout<<"I am currently rewriting my homework and  hope you will accept it late.";
	cout<<"\n\n\t\t\t\t\tSincerely,"<<"\n\t\t\t\t\t"<< Name <<endl;
	
}