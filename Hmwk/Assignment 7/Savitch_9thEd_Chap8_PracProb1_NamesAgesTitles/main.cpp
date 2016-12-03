/* 
   File:   main
   Author: Minh Quan Tang
   Created on November 29th, 2016, 2:04 PM
   Purpose:  
 */

#include <iostream>
#include <cstring>

using namespace std;

void separate_Variables(char y[], char name[], char age[], char title[]);

void output(char name[], char age[], char title[]);

int main()
{
    char y[] = "Juno 20 Programmer";
    char name[25];
    char age[4];
    char title[40];
    separate_Variables(y, name, age, title);
    output(name, age, title);
    return 0;
}

void separate_Variables(char y[], char name[], char age[], char title[])
{
    int i = 0;
    int j = 0;
    while (y[i] != '\0' && y[i] != ' ') {
        name[j++] = y[i++];
    }
    name[j] = '\0';
    j = 0;
    i++;
    while (y[i] != '\0' && y[i] != ' ') {
        age[j++] = y[i++];
    }
    age[j] = '\0';
    j = 0;
    i++;
    while (y[i] != '\0' && y[i] != ' ') {
        title[j++] = y[i++];
    }
    title[j] = '\0';
    j = 0;
}

void output(char name[], char age[], char title[])
{
    cout << "Name: " << name << endl
         << "Age: " << age << endl
         << "Title: " << title << endl;
}