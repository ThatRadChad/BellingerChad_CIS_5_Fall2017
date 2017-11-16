/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15, 2017, 3:39 PM
 * Purpose: Markup
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <iomanip>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 
float calcR (float, float); //Calculate Retail

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float wsCost=0, perc=0, totPrc=0; //Whole sale cost and percentage
   
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    cout<<"Please enter a non-negative number for the whole sale price and percentage"<<endl;
            cin>>wsCost>>perc;
        
    if (wsCost<0||perc<0)
    {
        cout<<"Please enter a non-negative number."<<endl;
            cin>>wsCost>>perc;
    }    
    totPrc=calcR(wsCost,perc);
    
    cout<<"The total price is $"<<totPrc<<endl;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
    float calcR(float cost, float pcent)
    {
        float totCost=0;
        totCost=((cost/100)*pcent)+cost;
        return totCost;
    }
