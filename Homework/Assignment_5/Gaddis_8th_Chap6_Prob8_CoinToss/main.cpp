/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15, 2017, 3:39 PM
 * Purpose: Coin Toss
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 
int coinToss(void)
{
    const int num[2] = {1,2}; //Generate a random number between 0-1
    int random = rand()%2;
    return random[num];
}

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables

    //Initialize Variables
    
    //Process or map the inputs to the outputs
    srand(time(NULL));
    
    string result;
    int loop;
    int rng;
    cout << "Flip the coin how many times? "<<endl;
    cin >> loop; 
    cout << endl;
    cout << "Loop   Result"<<endl;
    
    for(int i=1; i<=loop; i++)
    {
        rng = coinToss();
        if (rng == 1)
        {
            result = "Heads";
        }
    
        else if (rng == 2)
        {
            result = "Tails";
        }
        cout << setw(4) << i << setw(9) << result << endl;
    }
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

