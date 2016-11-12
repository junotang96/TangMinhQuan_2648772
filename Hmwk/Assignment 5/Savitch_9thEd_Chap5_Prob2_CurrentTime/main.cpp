/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 10th, 2016, 1:43 PM
   Purpose: 
 */

#include<iostream>
using namespace std;
int main()
{  

	int currHours,currMins,hoursWait,minutesWait;
	int hrs,min;
	char choice;
	do
	{

        		cout<<"Enter present Hours:";
	  	cin>>currHours;
	  	cout<<"Enter present minutes:";
	  	cin>>currMins;	
 	  	cout<<"Enterthe number of hours to wait:";
	  	cin>>hoursWait;
	  	cout<<"Enter the number of minutes to wait:";
	 	 cin>>minutesWait;
        		 hrs=currHours+hoursWait;
	 	 min=currMins+minutesWait;
	 	 if(min>=60)
	 	 {
		  hrs++;
		  min =min-60;
	 	 }
	  cout<<"Time:"<<hrs<<":"<<min<<endl;
	  cout<<"Do you want to continue then press y or Y:";
	  cin>>choice;
     }while(choice == 'Y' || choice =='y');
}

