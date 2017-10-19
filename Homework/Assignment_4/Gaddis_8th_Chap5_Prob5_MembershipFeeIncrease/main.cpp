/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 18, 2017, 6:19 PM
 * Purpose: Membership Fees Increase 
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float INCREASE=0.04; //4% increase throughout six years
const float YEARS=6; //A span of six years

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float membshp=2500; //Price of the membership in $ 
    
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Loop and Print
    for (int i=1; i<=YEARS; i++)
    {
        membshp = membshp+(membshp*INCREASE);
        cout<<"In "<<i<<" year(s) the price will be $"<<membshp<<endl;
    }
  
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
