/* 
   File:   main
   Author: Minh Quan Tang
   Created on September 29th, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
   int amount, ones, tens, hundreds, thousands;
   char date, payee, achold;
   
  
   cout<< "Enter a check amount from 1-3000: ";
   cin>> amount;
   
   thousands=(amount/1000)%10;
   hundreds=((amount/100)%100)%10;
   tens=(amount/10)%10;
   ones=amount%10;
       
   switch(thousands){
         case 1:
              cout<<"One Thousand ";
              break;
         case 2:
              cout<<"Two Thousand ";
              break;
         case 3:
              cout<<"Three Thousand ";
              break;
         }
       
   switch (hundreds){
         case 1:
              cout<<"One Hundred ";
              break;
         case 2:
              cout<<"Two Hundred ";
              break;
         case 3:
              cout<<"Three Hundred ";
              break;
         case 4:
              cout<<"Four Hundred ";
              break;
         case 5:
              cout<<"Five Hundred ";
              break;
         case 6:
              cout<<"Six Hundred ";
              break;
         case 7:
              cout<<"Seven Hundred ";
              break;
         case 8:
              cout<<"Eight Hundred ";
              break;
         case 9:
              cout<<"Nine Hundred ";
              break;
         }
   switch (tens){
         case 1:
              cout<<"Ten ";
              break;
         case 2:
              cout<<"Twenty ";
              break;
         case 3:
              cout<<"Thirty ";
              break;
         case 4:
              cout<<"Fourty ";
              break;
         case 5:
              cout<<"Fifty ";
              break;
         case 6:
              cout<<"Sixty ";
              break;
         case 7:
              cout<<"Seventy ";
              break;
         case 8:
              cout<<"Eighty ";
              break;
         case 9:
              cout<<"Ninety ";
              break;
         }
   switch (ones){
         case 1:
              cout<<"One ";
              break;
         case 2:
              cout<<"Two ";
              break;
         case 3:
              cout<<"Three ";
              break;
         case 4:
              cout<<"Four ";
              break;
         case 5:
              cout<<"Five ";
              break;
         case 6:
              cout<<"Six ";
              break;
         case 7:
              cout<<"Seven ";
              break;
         case 8:
              cout<<"Eight ";
              break;
         case 9:
              cout<<"Nine ";
              break;
         }
   
    cout <<"Dollars"<<endl;
    
        //Exit Program
               return 0;                
       }