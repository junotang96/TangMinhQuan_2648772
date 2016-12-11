/* 
   File:   main
   Author: Minh Quan Tang
   Created on December 1, 2016, 7:46 PM
   Purpose: The Hangman Games
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <string> //Function
#include <vector> //Push_back
#include <algorithm> //Ranges of elements
#include <ctime> //Time

using namespace std;

//User Libraries

//Global Constants
    
//Function Prototypes 
     
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    const int MAX_WRONG = 7;  //Number of guesses


    vector<string> words; //The words
    
    words.push_back("CHICKEN");
    words.push_back("HAMBUGER");
    words.push_back("VIDEOGAMES");
    words.push_back("DINOSAUR");
    words.push_back("ELEPHANT");
    words.push_back("PROGRAM");
    words.push_back("CHEESE");
    words.push_back("BLOBFISH");
    words.push_back("SHARK");
    words.push_back("TACO");
    words.push_back("GLASS");
    words.push_back("CONTROLLER");
    words.push_back("LIGHT");
    words.push_back("PIZZA");
    words.push_back("COMPUTER");
    words.push_back("SCIENCE");
    words.push_back("COUNTRY");
    words.push_back("NAVIGATOR");
    words.push_back("MOVE");
    words.push_back("GHOST");
    words.push_back("ENGLISH");
    
     //Set random number
    srand(static_cast<unsigned int>(time(0))); 

    random_shuffle(words.begin(), words.end());
    
    const string THE_WORD = words[0];            
    int wrong = 0;                               
    string soFar(THE_WORD.size(), '-');          
    string used = "";                            

    
        cout << "\t\t\tWelcome to Hangman!";
	cout<<"\n\t\t\t-------------------\n\n";
	cout<<"You have exactly " <<(MAX_WRONG - wrong)<< " guesses, good luck!";


    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "So far, the word is: " << soFar << endl;

        char guess;
        
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess); //Make uppercase since secret word in uppercase

        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }
        
        used += guess;

        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is in the word.\n";
            for (unsigned int i = 0; i < THE_WORD.length(); ++i)
			{
                if (THE_WORD[i] == guess)
				{
                    soFar[i] = guess;
				}
			}
        }
        
        else
        {
			++wrong;
                        
            cout << "Sorry, " << guess << " isn't in the word.\n";
            
	    cout<<"You have " <<(MAX_WRONG - wrong)<< " guesses left.\n";
        }
    }
        
    if (wrong == MAX_WRONG)
	{
        cout << "Game over, you've been hanged!";
	}
        
    else
	{
        cout << "Congratulation! You've successfully guessed the secret word!";
	}
      
    cout << "\nThe word was " << THE_WORD<<"\n\n";
	
    
    switch (guess)
    {
        case 0:
            words[0] = 'O';
            break;
        case 1:
            words[1] = '|';
            break;
        case 2:
            words[2] = '/';
            break;
        case 3:
            words[3] = '\\';
            break;
        case 4:
            words[4] = '/';
            break;
        case 5:
            words[5] = '\\';
            break;
        case 6:
            words[6] = '\\';
            break;
        case 7:
            words[7] = '/';
            break;
        case 8:
            words[8] = '\\';
            break;
    }
    
    return 0;
}