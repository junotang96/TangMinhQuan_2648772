
/* 
   File:   main
   Author: Minh Quan Tang
   Created on October 22th, 2016, 7:50 PM
   Purpose: Project 1 - White Knight Adventure Game
 */

//System Libraries
#include <iostream>
 
using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

//Declaration of Variables
void fight();
void action();
void battle();
//user stats
int userkills = 0;
int userHP = 100;
int userCHP = 100;  //C stands for current
int userdmg = 5;
int userheal = 2;
int usergold = 10;
//the enemy's base stats which are increased over time
int enemyHP = 35;
int enemyCHP = 35;
int enemydmg = 3;
int enemygold = 5;
//the enemy stats adjusted for difficulty
int DenemyHP, Denemydmg, Denemygold;
 
void town()
{
    cout << "you went to town \n";  
    action();
}
 
int main()
{
    //intro messages 
    cout << "                     Welcome to White Knight Adventure!\n";
    cout << "In this game, you will need to kill enemy to get gold and buy equipment to survive.\n\nThe more enemy you kill the harder it gets, and\nhighscores are based on amount killed.\n\n";
    cout << "\nIn town you will find a place to heal, and shops that sell gear.\n\nYou wont have to worry about town until you have gained more gold, so go ahead\nand try fighting by pressing \"2\" on your keyboard\n\n";
    action();
}
   //Input values
void action()
{
    cout << "would you like to visit town(1) or fight(2)?\n";
    int x;
    cin >> x;
    if (x == 1) town();
    if (x == 2) fight();
}
 
void pickdifficulty()
{
    int difficulty;
 //Process values -> Map inputs to Outputs
    cout << "Please pick this fights difficulty: (1 to 10)\n";
    cin >> difficulty;
    float middiff = (difficulty * 0.1) + 1;
    switch(difficulty)
    {
       case 1:
            DenemyHP = enemyHP;
            enemyCHP = DenemyHP;
            Denemydmg = enemydmg;
            Denemygold = enemygold;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            DenemyHP = enemyHP * middiff;
            enemyCHP = DenemyHP;
            Denemydmg = enemydmg * middiff;
            Denemygold = enemygold * middiff;
            break;
        case 8:
            DenemyHP = enemyHP * 2;
            enemyCHP = DenemyHP;
            Denemydmg = enemydmg * 2;
            Denemygold = enemygold * 2.2;
            break;
        case 9:
            DenemyHP = enemyHP * 2.3;
            enemyCHP = DenemyHP;
            Denemydmg = enemydmg * 2.3;
            Denemygold = enemygold *2.5;
            break;
        case 10:
            DenemyHP = enemyHP * 3;
            enemyCHP = DenemyHP;
            Denemydmg = enemydmg * 3;
            Denemygold = enemygold * 3.5;
            break;
        default:
            pickdifficulty();
            break;
    }
    cout << "Your enemy has:\n" << DenemyHP << " HP\n";
    cout << Denemydmg << " damage\n\nChoose an action now\n";
}
 
void fight()
{
      //this determines whether the player attacks or heals

 
    cout << "Choosing a higher difficulty will make the enemies stronger, but at the same\ntime they will drop more items and gold.  Change your difficulty to\nmaximize profits while staying safe, it can be changed each fight!\n\n";
    pickdifficulty();
    cout << "The fight has begun.  After each round, press (1) to attack again or (2) to heal\n";
    battle();
}
 
void attackmode()
{
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1: //player chooses attack
            enemyCHP = enemyCHP - userdmg;
            userCHP = userCHP - Denemydmg;
            cout << "You hit the enemy for " << userdmg << " and were hit for " << Denemydmg << endl;
            cout << "Enemy has " << enemyCHP << "/" << DenemyHP << " HP" << endl;
            cout << "Your HP is at " << userCHP << "/" << userHP << endl;
            break;
        case 2: //player heals
            userCHP = userCHP - enemydmg + userheal;
            if (userCHP > userHP) userCHP = userHP;
        default:
           attackmode();
    }
}
 
void battle()
{
    while (userCHP > 0 && enemyCHP > 0)
    {
        attackmode(); //figures out the players action
    }
    if (userCHP < 1) cout << "The Darkness Consume You";//dodeath();
    else
    {
        //change user information
        userkills ++; //adds a killcount 
        usergold += Denemygold;
        cout << "You have killed your enemy! you now have " << userkills << " total kill(s))\n" << endl;
        cout << "You have gained " << Denemygold << " gold! Your gold total is now " << usergold << endl;
        enemyHP += (userkills*3);
      
        action();
         //Exit Program
    }
  }
