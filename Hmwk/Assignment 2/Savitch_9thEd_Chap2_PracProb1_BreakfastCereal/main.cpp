/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Purpose: Calculate the weight of a package of breakfast cereal in ounces
 * Created on September 24, 2016, 2:27 PM
 */

#include<iostream>

using namespace std;
 
int main()

{
double const metric_ton = 35273.92;
double ounces,boxes;
double weight_calculation;
double number_of_boxes; 

    cout<<"Enter the weight of your cereal.\n"; 

    cin>>ounces; 

    weight_calculation = ounces/metric_ton;

    cout<<"The weight of the cereal is.\n";

    cout<<ounces<<"ounces\n"; 

    number_of_boxes = metric_ton/ounces;

    cout<<"The number of boxes of cereal that will hold a ton is.\n";

    cout<<number_of_boxes << "\n";
 
    return (0); 

}


