/* 
   File:   main
   Author: Minh Quan Tang
   Created on September 26th, 5:40 PM
   Purpose:  find amount of retroactive pay due 
 */

#include <iostream>
using namespace std;
int main()

{
double old_salary, retro_salary, new_salary, increase_salary, new_monthly_salary;
char ans;
const double rate = .076;

do
{
cout << "Please enter your old annual salary." << endl;
cin >> old_salary;

new_salary = (old_salary * .076) + old_salary;
increase_salary = new_salary - old_salary;
new_monthly_salary = new_salary / 12;
retro_salary = (old_salary / 2) * rate;

cout << endl;
cout << "Your new annual salary is $";
cout << new_salary << endl;
cout << "You received a $";
cout << increase_salary;
cout << " increase in salary." << endl;
cout << "You will receive $";
cout << retro_salary;
cout << " in retroactive salary." << endl;
cout << "Your new monthly salary is $";
cout << new_monthly_salary << endl;
cout << "Would you like to try this program again? <Y/N>\n";
cin >> ans;
}
while (ans == 'Y' || 'y' == ans);
cout << "Thank you for trying my program, Good-Bye.\n";

return 0;
}

