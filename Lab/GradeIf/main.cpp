/* 
   File:   main
   Author: Minh Quan Tang
   Created on September 26th, 2016, 9:45 AM
   Purpose:  Input a score, output a grade using if
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
    char grade;
    unsigned short score;
    
    //Input values
    cout<<"Input the score, receive your grade as output"<<endl;
    cin>>score;
    
    //Process values -> Map inputs to Outputs
    if(score>=90)grade='A';
    if(score<90&&score>=80)grade='B';
    if(score<80&&score>=70)grade='C';
    if(score<70&&score>=60)grade='D';
    if(score<60) grade='F';
    
    //Display Output
    cout<<"Your Grade = "<<grade<<" with a score = "<<score<<endl;

    //Exit Program
    return 0;
}
