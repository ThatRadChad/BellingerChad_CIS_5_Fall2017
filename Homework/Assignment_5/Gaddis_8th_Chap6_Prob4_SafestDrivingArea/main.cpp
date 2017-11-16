/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15, 2017, 3:39 PM
 * Purpose: Winning Division
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 
int numAcc(string);
void lowest(int, int, int, int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int accN, accS, accE, accW, accC;
   
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    for(int i=0; i<5; i++)
    {
        switch(i)
        {
        case 0:
            accN = numAcc("North");
            break;
        case 1:
            accS = numAcc("South");
            break;
        case 2:
            accE = numAcc("East");
            break;
        case 3:
            accW = numAcc("West");
            break;
        default:
            accC = numAcc("Central");
            
        }
    }
    lowest(accN, accS, accE, accW, accC);
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
int numAcc(string reg)
{
    int accs = 0;
    cout << "Input the number of accidents for " << reg << " :";
    cin >> accs;
    
    return accs;
}
void lowest(int r1, int r2, int r3, int r4, int r5)
{
    int lowest = 0;
    string reg = "";
    
    if(r1 < r2 && r1 < r3 && r1 < r4 && r1 < r5)
    {
        lowest = r1;
        reg = "North";
    }
    else if(r2 < r1 && r2 < r3 && r2 < r4 && r2 < r5)
    {
        lowest=r2;
        reg="South";
    }
    else if(r3<r1&&r3<r2&&r3<r4&&r3<r5)
    {
        lowest=r3;
        reg="East";
    }
    else if(r4<r1&&r4<r2&&r4<r3&&r4<r5)
    {
        lowest=r4;
        reg="West";
    }
    else
    {
        lowest=r5;
        reg="Central";
    }
    
    cout << "Region with least accidents is "<<reg<<" with "<<lowest<<
            " accidents.";
}

