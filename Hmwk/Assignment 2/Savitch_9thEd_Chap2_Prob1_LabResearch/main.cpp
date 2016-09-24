/* 
   File:   main
   Author: Minh Quan Tang
   Created on September 24th, 12:25 AM
   Purpose:  find how much diet soda pop to drink without dying as a result
 */

#include <iostream>
using namespace std;

int main()
{

const double DIET_SODA_SWEETNER = 0.001;
int DietSodaPopCans;
double SweetnerMouse;
double WeightMouse;
double SweetnerDieter;
double WeightDieter;

cout << "This program calculates how many cans of soda it will take to kill you !" << endl;
cout << "Each can contains 0.001 (0.1%) of artificial sweetener" << endl;

cout << "Enter the amount of Artificial Sweetner needed to kill a mouse: " << endl;
cin >> SweetnerMouse;

cout << "Enter the weight of the mouse in grams: " << endl;
cin >> WeightMouse;

cout << "Enter the weight of the dieter in grams at which dieting activity will be stopped: " << endl;
cin >> WeightDieter;

SweetnerDieter = (SweetnerMouse/WeightMouse) * WeightDieter;

DietSodaPopCans = (SweetnerDieter/DIET_SODA_SWEETNER);

cout << "The amount of Diet Soda Pop Can's that would kill the dieter is: " << DietSodaPopCans; 

return 0;


}
