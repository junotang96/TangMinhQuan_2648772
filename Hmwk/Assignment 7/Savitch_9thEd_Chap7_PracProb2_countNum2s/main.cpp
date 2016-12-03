/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 28th, 2016, 4:30 PM
   Purpose:  
 */

#include <iostream>

int countNum2s(int arr[], int size)
{
	int count = 0;//start count at 0
	for (int i = 0; i < size; i++) //count up to size to check for 2's
	{
		if (arr[i] == 2) //if number we're checking is a 2
		{
			count += 1; //add 1 to count
		}
	}
	return count; //return count
}

int main()
{
	int myarray[] = { 2, 3, 1, 2 };
	int numberof2s = countNum2s(myarray, 4);
	std::cout << "Number of 2s: " << numberof2s << std::endl;
	return 0;
}