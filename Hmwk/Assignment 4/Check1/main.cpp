/* 
   File:   main
   Author: Minh Quan Tang
   Created on October 18th, 2016, 7:10 PM
   Purpose: Calculate a check
 */

//System Libraries
#include <iostream> //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int rofpay, hrs, date, payee;
    
    //Input values
    cout<<"Enter Date: "<<endl;
    cin>>date;
    cout<<"Enter payee: "<<endl;
    cin>>payee;
    
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
