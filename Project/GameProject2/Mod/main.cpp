/* 
   File:   main
   Author: Minh Quan Tang
   Created on December 1, 2016, 7:46 PM
   Purpose: The Hangman Games
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <string> //Function
#include <vector> //Vector
#include <algorithm> //Ranges of elements
#include <ctime> //Time
#include <cstdlib>  //Random
#include <fstream> //I/O

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
    
//Function Prototypes 
     
//Execution Begins Here!
vector<char> board;
vector<string> body (6);
vector<char> wrongChar (6);
int correct=-1;
void menu();

string wordSelect(vector<string>& wordBanktxt)
{
    
    string word;
    if (wordBanktxt.size()>0)
    {
        srand(time(0)); //Random number seed
        int random=rand()%(wordBanktxt.size()+1)+0; 
        word=wordBanktxt[random];
    }
    else
    {
        string wordBank[10]={"videogames","program","computer","science","light","shark","waterpolo","password","blackjack","elephant"};
        srand(time(0)); //Random number seed
        int rD=rand()%(10+1)+0;
        word=wordBank[rD];
    }
    return word;
}

void pressEnter(string conWord)
{
    cout << string(3,'\n'); // Makes screen cleaner and more readable
    cout << "Press 'Enter' to " << conWord << "." << endl;  //conWord is the action
    cin.get(); //Take user input
}

void help()
{
    cout << "**********" << endl;
    cout << "***Help***" << endl;
    cout << "**********" << endl;
    string(3,'\n');

    cout << "\t The rule is very simple: \nYou have 6 guesses in order to figure out the secret word, if you got all the words, you win. Otherwise you got hang." << endl;
    cin.ignore();
    pressEnter("go back to menu");
}
void promptLose(string word)
{
    //Draw the face
    cout << " ###########" << endl;
    cout << "|           |" << endl;
    cout << "| (X)   (X) |" << endl;
    cout << "|     >     |" << endl;
    cout << "|   _____   |" << endl;
    cout << "|___________|" << endl;

    cout << "Sorry... You got hang!  The word was '" << word << "'!" << endl;
    pressEnter("go back to menu");
}

void promptWin()
{
    //Congrats user for winning
    cout << string(3, '\n');
    cout << "Congrats! You got the word so you didn't die!" << endl;
    pressEnter("go back to menu");
}

char setBoard(int length)
{
    for(int i=0; i<6; i++)
    {
        wrongChar[i]=' ';
    }

    board.resize(length);
    for(int i=0; i<board.size(); i++)
    {
        board[i]='_';
    }
    for(int i=0; i<body.size(); i++)
    {
        body[i]=' ';
    }
}
//This section draw a hangman
void printBoard(int incorrect)
{
    if (incorrect>0)
    {
        if (incorrect==1)
        {
            body[0]="0";
        }
        if (incorrect==2)
        {
            body[1]="|";
        }
        if (incorrect==3)
        {
            body[2]="/";
        }
        if (incorrect==4)
        {
            body[3]="\b\\ ";
        }
        if (incorrect==5)
        {
            body[4]="/";
        }
        if (incorrect==6)
        {
            body[5]="\\";
        }
    }
   
    cout << "\t " << "|========||" << endl;
    cout << "\t " << "|        ||" << endl;
    cout << "\t " << body[0] << "        ||" << endl;
    cout << "\t" << body[2] << "";
    cout << body[1] << " ";
    cout << body[3] << "      ||" << endl;
    cout << "\t" << body[4] << " ";
    cout << body[5] << "       ||" << endl;
    cout << "\t" <<"          ||" << endl;
    cout << "\t" <<"     =========" << endl;

    cout << endl;

    for(int i=0; i<board.size(); i++)
    {
        cout << board[i];
        cout << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Incorrect Letters" << endl;
    cout << "___________________" << endl;
    cout << "| "<< wrongChar[0] <<"| "<< wrongChar[1] <<"| "<< wrongChar[2] <<"| "<< wrongChar[3] <<"| "<< wrongChar[4] <<"| "<<wrongChar[5]<<"| "<< endl;
    cout << "-------------------" << endl;
}

int replaceChar(string word,char guess,int tempCorrect,int incorrect)
{
    //This section initialize the input
    int numLetter=0;
    int length=word.length();
    vector <char> guessRep (length);
    for(int i=0; i<length; i++)
    {
        if (word[i]==guess)
        {
            numLetter++;
            board[i]=guess;
        }
    }
    if (numLetter==1)
    {
        cout << "There is " << numLetter << " " << guess << "!" << endl;
        tempCorrect++;
        correct=0;
    }
    if (numLetter==0)
    {
        cout << "There are no " << guess << "'s!" << endl;
        correct=1;
        if (incorrect<=6)
        {
        wrongChar[incorrect]=guess;
        }
    }
    if (numLetter>=2)
    {
        cout << "There are " << numLetter << " " << guess << "'s!" << endl;
        tempCorrect=tempCorrect+numLetter;
    }
    cin.ignore();
    pressEnter("continue");
    return tempCorrect;
}


int playGame()
{
    //This section use wordBank
    pressEnter("continue");
    vector <string> wordBank;
    ifstream fin;
    string tempWord;
    if (fin.is_open())
    {
        cout << "Successfully opened Filed!" << endl;
        pressEnter("continue");
        while(fin >> tempWord)
        {
            wordBank.push_back(tempWord);
        }
        fin.close();
        wordSelect(wordBank);
    }
    else
    {
        cout << "No wordBank file found.  Using default words!" << endl;
        pressEnter("continue");
    }
    char guess;
    string word=wordSelect(wordBank);
    int length=word.length();
    int tempCorrect=0;
    int incorrect=0;
    int counter=-1;
    setBoard(length);

    while(true)
    {
        printBoard(incorrect);
        cout << "Guess: ";
        cin >> guess;
        tempCorrect=replaceChar(word,guess,tempCorrect,incorrect);
        if (correct==1)
        {
        incorrect++;
        }

        if(tempCorrect==length)
        {
            promptWin();
            break;
        }
        if(incorrect==6)
        {
            promptLose(word);
            break;
        }
    }
    //This section tell the problem
    if(tempCorrect>length || tempCorrect<0)
    {
        cout << "Uh Oh..." << endl;
        cout << "~~~~~~~~" << endl;
        cout << "The program came across a problem." << endl;
        cout <<"Exiting...";
        cout << "tempCorrect: " << tempCorrect << endl;
        cout << "---------------" << endl;
        cout << "incorrect: " << incorrect << endl;
        cout << "---------------" << endl;
        exit(0);
    }

}

void menu()
{
    int tempChoice;
    //This section for player choice
    cout << "**************" << endl;
    cout << "*****MENU*****" << endl;
    cout << "**************" << endl;
    string(3,'\n');

    cout << "\t 1) Play" << endl;
    cout << "\t 2) Help" << endl;
    cout << "\t 3) Exit" << endl;
    cin >> tempChoice;

    if(tempChoice==1)
    {
        playGame();
    }

    if(tempChoice==2)
    {
        help();
    }

    if(tempChoice==3)
    {
        exit(0);
    }
  
}

int main()
{
    //Welcome the player
    cout << "----------------------" << endl;
    cout << "#********************#" << endl;
    cout << "# Welcome to Hangman #" << endl;
    cout << "#********************#" << endl;
    cout << "----------------------" << endl;
    pressEnter("continue");

    while(true)
    {
        menu();
    }
    //Exit
    return 0;
}