/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 18, 2017, 6:19 PM
 * Purpose: Calories Burned
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
    float calsB; 
    float calsPM=3.6f;
    
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Loop and Print
    for (int min=5; min<=30; min+=5)
    {
        calsB = min*calsPM;
        cout<<"In "<<min<<" minutes you lost "<<calsB<<" calories."<<endl;
    }
  
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
