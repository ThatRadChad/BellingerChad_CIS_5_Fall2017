/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 17, 2017, 1:39 PM
 * Purpose: Ocean Levels Rising 
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
    float ocnLvl=0;
    int yrs=25;
    
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Loop and Print
    for (int i=1; i<=yrs;i++)
    {
        ocnLvl+=1.5;
        cout<<"The ocean will raise "<<ocnLvl<<" millimeters a year"
                <<" for year "<<i<<endl;
    }
  
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
