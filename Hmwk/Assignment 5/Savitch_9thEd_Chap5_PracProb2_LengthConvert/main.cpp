/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 10th, 2016, 5:55 PM
   Purpose: Convert feet and inches and outputs the equivalent length in meters and centimeters
 */

#include <iostream>
using namespace std;
void get_input(float& feet, float& inches, float& meters, float& centimeters);
	
float convert(float& feet, float& inches, float& meters, float& centimeters);

void give_output(float feet, float inches, float meters, float centimeters);

	int main()
{
	float feet, inches, meters, centimeters;
	char check;

	do {
			get_input(feet, inches, meters, centimeters);
			convert(feet, inches, meters, centimeters);
			give_output(feet, inches, meters, centimeters);
			cout<<"Repeat calculation? (Y/N)"<<endl;
			cin>>check;

		}while(check == 'Y' || check == 'y');

}

void get_input(float& feet, float& inches, float& meters, float& centimeters)
{ 
	
	cout<<"Enter feet to convert it to meters: ";
	cin>>feet;
	cout<<endl<<"Enter inches to convert it to centimeters: ";
	cin>>inches;
}

float convert(float& feet, float& inches, float& meters, float& centimeters)
{
	
	meters = feet * 0.3048;
	return meters;
	centimeters = inches * 2.54;
	return centimeters;
}

void give_output(float feet, float inches, float meters, float centimeters)
{
	cout<<feet<<" feet " <<inches<<" inches is equivalent to "<<meters<<" meters "<<centimeters<<" centimeters"<<endl;
}
