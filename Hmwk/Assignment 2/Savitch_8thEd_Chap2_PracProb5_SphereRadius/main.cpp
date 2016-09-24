/* 
 * File:   main.cpp
 * Author: Juno
 * Purpose: Calculate the volume of a sphere given the radius
 * Created on September 26, 2016, 7:45 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float r;
float pi= 3.142;
float volume;
float total_volume;

for(r=1; r<=999;r++)
{
cout << "Please insert the value of r from 0-999:";
cin >> r;
volume = (4/3)*(pi)*(r*r*r);
cout<< "Radius:"<< r<< "\t";
cout<<"Volume:"<<volume<<"\n"<<"\n";
}

total_volume += volume;
cout<<"The total volume is:"<<total_volume;

return 0;

}


