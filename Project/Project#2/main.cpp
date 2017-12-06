/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 30, 2017, 11:28 AM
 * Purpose: Project #2 - Roulette 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Library set random number seed
#include <ctime>        //Libary to seed the random number generator
#include <iomanip>      //Format Library
#include <string.h>     //String Library
#include <cmath>        //Math Library
#include <fstream>      //File Library

using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
int const MIN_NUM=1, MAX_NUM=36; //Maximum and minimum numbers 
                                 //allowed in roulette 

//Function Prototypes
bool isEven(int n)
{
    if (n%2==0)
        return true;
    else
        return false;
}

//Arrays
//Red numbers in Roulette
int red[18]={1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 
             21, 23, 25, 27, 30, 32, 34, 36};

//Black numbers in Roulette
int blk[18]={2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 
             22, 24, 26, 28, 29, 31, 33, 35};     

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int num;         //Number the User bets on
    int rng;         //Random number generation
    float bud=0;     //The Users Budget
    float bet;       //The Users bet
    float wins=0;    //The amount of monet the User receives for winning
    char agn;        //Prompt User if they want to play again
    char gameT[2];   //Game selection between a specific number, odd number, 
                     //even number, black number, or red number
    char evenodd[2]; //Even and odd numbers
    char blackred[2];//Black and red numbers
    
    //Input Data/Variables
    cout<<"Welcome to Roulette"<<endl;    
    cout<<"What is your current budget for Roulette?"<<endl;
        cin>>bud;
    
    //Start of the User Loop
    begin:
        
    cout<<"How much money would you like to gamble?"<<endl; 
        cin>>bet;
    
    if(bet>bud)
        {
            cout<<"Insufficient funds to place bet."<<endl;
            cout<<"How much money would you like to gamble?"<<endl; 
                cin>>bet;
        }
    
    //cout<<fixed<<setprecision(2)<<showpoint;    
    cout<<"Are you betting on a specific number (N)?"<<endl;
    cout<<"Are you betting on an even numbers   (E)? "<<endl;
    cout<<"Are you betting on an odd numbers    (O)?"<<endl;
    cout<<"Are you betting on a black number    (B)? "<<endl;
    cout<<"Are you betting on a red number      (R)? "<<endl;
        cin>>gameT;
        
    //Process or map the inputs to the outputs
    if(!strcmp(gameT,"N")||(!strcmp(gameT,"n")))
        {
            cout<<"What number would you like to bet on? "<<endl; 
                cin>>num;
        if ((num<=00)&&(num<=37))
            {
                cout<<"The number you entered is invalid, "
                        "please enter a valid number: "<<endl;
                    cin>>num;
            }
                    srand(time(NULL));
                    rng=rand()%(MAX_NUM-MIN_NUM+1)+MIN_NUM;
                cout<<"The ball landed on "<<rng<<endl;
        //Loss
        if (num!=rng)
            {
                cout<<"You lose $" <<bet<<endl;
                    wins-=bet;
            }
        //Win        
        else
            {
                cout<<"You win $"<<35*bet<<endl;
                    wins+=35*bet;
            }
        }
        
    //User selects Even #
    if((!strcmp(gameT,"E")||(!strcmp(gameT,"e"))))
        {
                    srand(time(NULL));
                    rng=rand()%(MAX_NUM-MIN_NUM+1)+MIN_NUM;
                cout<<"The ball landed on "<<rng<<endl;
            
            if (gameT=="E"||"e")
                
        //Even wins
            if(isEven(rng))
            {
                cout<<"You win $"<<bet<<endl;
                wins+=bet;
            }
        //Even loss
            else
            {
                cout<<"You lose $"<<bet<<endl;
                wins-=bet;
            }
        }
        
    //User selects Odd #
    if((!strcmp(gameT,"O")||(!strcmp(gameT,"o"))))
        {
                srand(time(NULL));
                rng=rand()%(MAX_NUM-MIN_NUM+1)+MIN_NUM;
            cout<<"The ball landed on "<<rng<<endl;

        if (gameT=="O"||"o")
        {
        //Odd win
            if(isEven(rng))
            {
                cout<<"You lost $"<<bet<<endl;
                wins-=bet;
            }
        //Odd loss
            else
            {
                cout<<"You win $"<<bet<<endl;
                wins+=bet;
            }
        } 
    }
    
    //User select Black #
    if(!strcmp(gameT,"B")||(!strcmp(gameT,"b")))
        {
            cout<<"What number black would you like to bet on? "<<endl;
            cout<<"Your choices are: 2, 4, 6, 8, 10, 11, 13, 15, 17, 20, " 
                  "22, 24, 26, 28, 29, 31, 33, and 35"<<endl;
                cin>>num;
        if (num==00)
            {
                num=37;
            }
                    srand(time(NULL));
                    rng=rand()%(MAX_NUM-MIN_NUM+1)+MIN_NUM;
                cout<<"The ball landed on "<<rng<<endl;
        //Loss
        if (num!=rng)
            {
                cout<<"You lose $" <<bet<<endl;
                    wins-=bet;
            }
        //Win        
        else
            {
                cout<<"You win $"<<bet<<endl;
                    wins+=bet;
            }
        } 
        
    //User select Red #
    if(!strcmp(gameT,"R")||(!strcmp(gameT,"r")))
        {
            cout<<"What number red would you like to bet on? "<<endl;
            cout<<"Your choices are: 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, "
                  "21, 23, 25, 27, 30, 32, 34, and 36"<<endl;
                cin>>num;
        if (num==00)
            {
                num=37;
            }
                    srand(time(NULL));
                    rng=rand()%(MAX_NUM-MIN_NUM+1)+MIN_NUM;
                cout<<"The ball landed on "<<rng<<endl;
        //Loss
        if (num!=rng)
            {
                cout<<"You lose $" <<bet<<endl;
                    wins-=bet;
            }
        //Win        
        else
            {
                cout<<"You win $"<<bet<<endl;
                    wins+=bet;
            }
        }
    
    //Prompt User to play again    
    if(bud>0)
    {
        cout << "Keep playing? (Y/N)"<<endl;
        cin>>agn;

    if ((agn=='Y')||(agn=='y'))
        {
    goto begin;
        }
    }
        
    if (bud<=0)
    {
        cout << "You are unable to play due to insufficient funds."<<endl;
    }
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(2)<<showpoint;    

    if (wins<bet)
            {
                cout<<"You lost a total of $"<<abs(wins)<<endl;
            }
        else
                cout<<"You won a total of $"<<wins<<endl;
    
    if (bud<bet)
            {
                cout<<"Your updated budget is currently $"<<bud-abs(wins)<<endl;
            }
        else
                cout<<"Your updated budget is currently $"<<bud+wins<<endl;        
    
    //Exporting to a Notepad
    ofstream roulRes ("Roulette Results.txt");
    if (roulRes.is_open())
    {
        roulRes<<"Your currently updated budget is $"<<bud+wins<<endl;
        roulRes<<", Your currently updated total amount of dollars won/lost "
                "is $"<<wins<<endl;
    
    //Close the File   
        roulRes.close();
    }
    
    //Exit the program
    return 0;
}