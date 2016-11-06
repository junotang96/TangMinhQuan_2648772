/* 
   File:   main
   Author: Minh Quan Tang
   Created on October 20th, 2016, 5:42 PM
   Purpose: Develop an application that will determine the gross pay for 
employees. The company pays "straight-time" for the 
first 40 hours worked, double time for all hours worked in 
excess of 40 hours but less than 50 hours, and triple time for any 
hours worked over 50 hours. Inputs to the program would be hours worked 
and rate of pay.  Output would be gross pay.

 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int rofpay, hrs;
    
    //Input values
    cout<<"Enter number of hours worked: "<<endl;
    cin>>hrs;
    cout<<"Enter rate of pay: "<<endl;
    cin>>rofpay;
    
    //Display Output
    if (hrs == 40){
        rofpay = rofpay * hrs;
            cout <<"Your gross pay is: "<<"$"<< rofpay;
    }
    else if  (hrs <= 50){
        rofpay = rofpay * hrs * 2;
            cout <<"Your gross pay is: "<<"$"<< rofpay;
    }
    else if (hrs > 50){
        rofpay = rofpay * hrs * 3;
            cout <<"Your gross pay is: "<<"$"<< rofpay;
    }
    //Exit Program
    return 0;
}