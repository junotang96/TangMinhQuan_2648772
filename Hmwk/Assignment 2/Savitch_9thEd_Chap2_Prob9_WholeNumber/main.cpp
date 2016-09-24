/* 
 * File:   main.cpp
 * Author: Minh Quan Tang
 * Purpose: Reads whole numbers and outputs the sum of all the numbers greater than zero
 * Created on September 23, 2016, 5:21 PM
 */

#include <iostream>
using namespace std;


int main ()
{

int number, negative_sum=0, positive_sum=0, sum=0, average_neg=0, 
average_pos=0, average=0;
int count=0, positiveCount=0, negativeCount=0; 
cout << "Please Input 10 whole numbers(Each number should be separated by space or       Enter)\n";

for(int i=0;i<10;i++)
 {

 //cout<<"i is"<<i<<endl;
cin >> number;

if (number >= 0 )
 {
     positive_sum += number;
     positiveCount++;  count++;
 } 

 else     
 {
     negative_sum += number ; 
     negativeCount++; count++;
 }  
 }
if(positiveCount>0)
{
 average_pos = positive_sum / positiveCount;
}

if(negativeCount>0)
{ 
average_neg = negative_sum / negativeCount; 
}

sum = positive_sum + negative_sum;

if(count>0)
{
  average = sum / count;
} 

 cout<<average_pos;
 cout << "The Total sum of Positive Numbers is " << positive_sum << " and the average of   \nThe postive numbers entered is ";
 cout << average_pos<< endl; 
 cout << "The Total sum of Negative Numbers is " << negative_sum << " and the average of  \nThe negative numbers entered is ";
 cout << average_neg << endl; 
 cout << "The Total sum of numbers entered is " << sum << " and its average is "<< average << endl;

 return 0;
 }