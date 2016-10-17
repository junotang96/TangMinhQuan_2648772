/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Created on October 17, 2016, 9:39 AM
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
    unsigned short arabic;//An integer from [1000-3000]
    unsigned char n1000s,n100s,n10s,n1s;
    
    //Input values
    do{
        cout<<"This program converts Arabic base 10 to Roman Numerals"<<endl;
        cout<<"Enter an integer from [1000-3000]"<<endl;
        cin>>arabic;
    }while(arabic<1000||arabic>3000);
    
    //Process values -> Map inputs to Outputs
    //Thousands First
    n1000s=arabic/1000;
    switch(n1000s){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    
    //100's next
    arabic%=1000;//Drop the 1000's
    n100s=arabic/100;
    switch(n100s){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    
    //10's next
    arabic%=100;//Drop the 1000's
    n10s=arabic/10;
    switch(n10s){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
    
    //10's next
    arabic%=10;//Drop the 1000's
    n1s=arabic/1;
    switch(n1s){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
    
    //Exit Program
    return 0;
}