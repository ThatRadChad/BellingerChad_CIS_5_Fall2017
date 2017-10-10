/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 13, 2017, 4:52 PM
 * Purpose: Restaurant Bill meal cost, tip, tax
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float melChrg; //The meal charge
    float tax; //Tax on the meal
    float tip; //Tip included on-top of meal charge
    float total; //Total of everything
    float taxAmnt; //Tax in dollars
    float tipAmnt; //Tip on dollars
    
    //Initialize Variables
    
    //Input Data/Variables
    melChrg=88.67; 
    tax=6.75;
    tip=20;      
    
    //Process or map the inputs to the outputs
    taxAmnt=melChrg/tax;
    tipAmnt=melChrg/tip;
    total=taxAmnt+melChrg+tipAmnt;
    
    //Display/Output all pertinent variables
    cout<<"The cost of the total meal was $"<<melChrg<<endl;
    cout<<"The total amount of the tax was $"<<taxAmnt<<endl;
    cout<<"The total amount of the tip was $"<<tipAmnt<<endl;
    cout<<"The total amount of it all was $"<<total<<endl;
    
    //Exit the program
    return 0;
}