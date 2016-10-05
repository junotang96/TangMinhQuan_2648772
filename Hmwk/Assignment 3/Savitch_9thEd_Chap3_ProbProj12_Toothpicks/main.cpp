/* 
   File:   main
   Author: Minh Quan Tang
   Created on October 4, 2016, 8:10 PM
   Purpose: Play a Toothpick game
 */

#include <cstdlib>
#include <iostream>
#include <cstring>



using namespace std;

int main(int argc, char** argv) {
    
    //Write a human vs computer program that plays "23"
    //c_pick is the computer's choice while h_pick is the human choice
    
        
        
    
    int c_pick, h_pick;
    int toothpicks= 23;


do{ 
    
    
    cout << "Welcome to the toothpick game." << endl;

   
        cout << "Please pick up your toothpick(s), choose between 1 and 3.\n";
        cin >> h_pick;

        toothpicks = toothpicks - h_pick;
        cout << toothpicks << " toothpick(s) remaining" << endl;

        if (toothpicks == 1 && c_pick == 1) {
            cout << "Human! You have prevailed!" << endl;
            break;
        } 

        if (toothpicks > 4) {
            c_pick = 4 - h_pick;
            cout << "The computer took " << c_pick << " toothpick(s)" << endl;
        } else if (toothpicks == 2) {
            c_pick = 1;
            cout << "The computer took " << c_pick << " toothpick(s)" << endl;
        } else if (toothpicks == 3) {
            c_pick = 2;
            cout << "The computer took " << c_pick << " toothpick(s)" << endl;
        } else if (toothpicks == 4) {
            c_pick = 3;
            cout << "The computer took " << c_pick << " toothpick(s)" << endl;
        } else if (toothpicks == 1) {
            c_pick = 1;
            cout << "The computer took " << c_pick << " toothpick(s)" << endl;
        }

        toothpicks = toothpicks - c_pick;
        cout << toothpicks << " toothpick(s) remaining"<<endl;

        if (toothpicks == 1 && h_pick == 1) {
            cout << "The computer has prevailed!" << endl;
            break;
        }
        
        if (h_pick>3 || h_pick <0)
        {
            cout<< "Please enter a correct value." <<endl;
            
            continue;
        }
        
        if (toothpicks <0){
            cout<<"Game will restart, now. (Enter 4 to quit)"<< endl;
            cin>>h_pick;
            toothpicks=23;
            continue;
        }

    }
    while (h_pick != 4);
    
    return 0;
}
