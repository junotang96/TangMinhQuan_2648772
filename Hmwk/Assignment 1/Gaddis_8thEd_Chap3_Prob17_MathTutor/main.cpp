/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Created on September 14, 2016, 10:18 AM
 * Purpose:  Develope a math tutor to emphasis the random number generator
 */

//System Libraries Here
#include <iostream> // Input/output
#include <cstdlib> //Random number seed
#include <ctime> //Seed the random number generation
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned short op1, op2, result, user, answer;
    
    //Input or initialize values Here
    op1=rand()%900+100;//3 digit random number
    op2=rand()%900+100;//3 digit random number
    
    //Process/Calculations Here
    result=op1+op2;
    
    //Output Located Here
    cout<<"Solve the following addition problem"<<endl;
    cout<<"   "<<op1<<endl;
    cout<<" + "<<op2<<endl;
    cout<<"_ _ _ _ _ "<<endl;
    
    //Ask user for the answer
    cout<<endl<<"What is the answer?"<<endl;
    cin>>answer;
    cout<<endl;
    
    //Determine if correct or not
    cout<<"The answer is "<<(result==answer?"Correct":"Incorrect")<<endl;
    cout<<"The answer was = "<<result<<endl;
    //Exit
    return 0;
}

