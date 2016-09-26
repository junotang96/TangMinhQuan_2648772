/* 
   File:   main
   Author: Minh Quan Tang
   Created on September 26th, 2016, 9:44 AM
   Purpose:  Input a score, output a grade 
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
  
    //Process values
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    
    //Display output
          cout<<"Your Grade = "<<grade<<" with a score = "<<score<<endl;
  
    //Exit Program
    return 0;
}

