/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 2, 2017, 2:58 PM
 * Purpose: Project #1 - Roulette 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Library set random number seed
#include <ctime>        //Libary to seed the random number generator
#include <iomanip>      //Format Library
#include <fstream>      //File Library
#include <string.h>     //String Library
#include <cmath>

using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
int const MIN_NUM=1, MAX_NUM=36;

//Function Prototypes
bool isEven(int n)
{
    if (n%2==0)
        return true;
    else
        return false;
}

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int num;
    int rng;
    float bet, wins=0;
    char gameT[2];
    char evenodd[2];
    //char fileOut[SIZE]="rouOut.dat";
    //string fileIn="rouIn.dat";
    //ofstream out;
    //ifstream in;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"Welcome to Roulette"<<endl;
    cout<<"How much money would you like to gamble?"<<endl; 
        cin>>bet;
    cout<<"Are you betting on a number (N), odd numbers(O), "
            "or even numbers(E)? "<<endl;
        cin>>gameT;
        
    //Process or map the inputs to the outputs
        if(!strcmp(gameT,"N")||(!strcmp(gameT,"n")))
    {
            cout<<"What number would you like to bet on? "<<endl; 
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

    //Display/Output all pertinent variables
        if (wins<bet)
            {
                cout<<"You lost a total of $"<<abs(wins)<<endl;
            }
        else
                cout<<"You won a total of $"<<wins<<endl;
        
    //Close the file
    //out.close();
    //in.close();
    
    //Exit the program
    return 0;
}