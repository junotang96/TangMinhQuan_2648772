/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 1st, 2016, 3:04 PM
   Purpose: 
 */

#include <iostream>
#include <iomanip>
using namespace std;
 
int alpha[26] = {0};
int main()
    {
	const string strSample = "do be do bo";
	for (int i = 0; i < strSample.length(); i++) {
		int a = strSample[i];
		if (a >= 'a' && a <= 'z') alpha[a - 'a']++;
		else if (a >= 'A' && a <= 'Z') alpha[a - 'A']++;
		}
	cout << "Letter Frequency" << endl
		 << "------ ---------" << endl;
 
	for (int i = 0; i < 26; i++) {
        if (alpha[i]) {
		    cout << right << setw(4) << char('A' + i) << setw(7) << right << alpha[i] << endl;
            }
		}
	return 0;
	}
 