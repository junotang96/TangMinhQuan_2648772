/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Created on September 19, 2016, 9:55 AM
 * Purpose: Monthly Payment
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int PERCENT=100;//Percentage conversion
const int MONTHS=12;//Month in a year

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char nCmPrds=36;//Number of monthly compounding periods
    float intRate=12;//Percentage per year
    float loanAmt=1e4f;//$10,000 loan
    float monPay;//Monthly Payment $'s
    float totPaid;//Total Amount paid $'s
    float intPaid;//Total interest paid $'s
    
          
    
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    intRate/=(PERCENT*MONTHS);
    float temp=pow((1+intRate),nCmPrds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Using floating point values gives an error"<<endl;
    cout<<"Loan Amount            :$ "<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month  : "<<setw(8)<<intRate<<endl;
    cout<<"Number of months       :"<<static_cast<int>(nCmPrds)<<endl;
    cout<<"Monthly Payment        :$"<<setw(8)<<monPay<<endl;
    cout<<"Interest Paid          :$"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid             :$"<<setw(8)<<totPaid<<endl;
    
    monPay=intRate*temp*loanAmt/(temp-1);
    int mp=monPay*100+0.5;//Calculate to the number of pennies
    monPay=mp/100;//Accurate to the penny
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Using integer values"<<endl;
    cout<<"Loan Amount            :$ "<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month  : "<<setw(8)<<intRate<<endl;
    cout<<"Number of months       :"<<static_cast<int>(nCmPrds)<<endl;
    cout<<"Monthly Payment        :$"<<setw(8)<<monPay<<endl;
    cout<<"Interest Paid          :$"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid             :$"<<setw(8)<<totPaid<<endl;
    
    //Exit
    return 0;
}

