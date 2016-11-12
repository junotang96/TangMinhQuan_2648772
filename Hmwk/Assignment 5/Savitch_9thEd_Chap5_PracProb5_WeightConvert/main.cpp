/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 8th, 2016, 10:35 AM
   Purpose: convert pounds and ounces to kilograms and grams
 */

#include <iostream>

using namespace std; 

void weightInput(float& pounds, float& ounces)
{
    cout << "Enter pounds: ";
    cin >> pounds;
    cout << "Enter ounces: ";
    cin >> ounces;
}
void weightCalculating(float& pounds, float& ounces, float& kilograms, 
        float& grams)
{
    ounces = pounds / 16;
    kilograms = pounds * 2.2406;
    grams = kilograms / 1000;
    
}
void weightOutput(float& kilograms, float& grams)
{
    cout << kilograms << " kilograms and " << grams <<
            " grams.\n";
}
int main(int argc, char** argv) {

    float pounds;
    float ounces;
    float kilograms;
    float grams;
    char userInput;
    do{
    weightInput(pounds, ounces);
    weightCalculating(pounds, ounces, kilograms, grams);
    weightOutput(kilograms, grams);
    cout << "Would you like to do another conversion?\n Y for yes or any other"
            " key to quit.";
    cin >> userInput;
    }while(userInput == 'Y');
    return 0;
}