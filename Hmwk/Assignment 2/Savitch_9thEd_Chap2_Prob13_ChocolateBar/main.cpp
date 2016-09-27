/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Created on September 26, 2016, 3:18 PM
 * Purpose:  How many candy bars can I eat/day without gaining weight
 */

#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

int main(int argc, char** argv) {
    //Declare Variables
    char mf;//Male-female calculation
    float lbs,inches,yrs;
    float BMR,chocBar=230.0f;
    int nBars;
    
    //Input Data
    cout<<"Candy bar calculation to maintain weight"<<endl;
    cout<<"Eat less than this to lose weight!"<<endl;
    cout<<"Input male or female with m or f"<<endl;
    cin>>mf;
    cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
    cin>>lbs>>inches>>yrs;
    
    //Process the Data
    BMR=(mf=='m'||mf=='M')?
        66+6.3*lbs+12.9*inches-6.8*yrs://Male Equation
        655+4.3*lbs+4.7*inches-4.7*yrs;//Female Equation
    nBars=BMR/chocBar+1;
    
    //Output the processed Data
    cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;
    
    //Exit Stage Right!
    return 0;
}
