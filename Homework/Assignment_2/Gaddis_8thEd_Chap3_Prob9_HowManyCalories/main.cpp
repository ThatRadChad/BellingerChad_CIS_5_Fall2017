/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 23, 2017, 9:46 AM
 * Purpose: How Many Calories?
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <iomanip>
#include <cmath>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cookies; //Total cookies consumed
    float totCal; //Total calories consumed 
    
    //Initialize Variables 
    
    //Input Data/Variables    
   
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"How many cookies did you consume? "<<endl;
        cin>>cookies; 
    totCal = cookies * 75;
    cout<<"You consumed "<<totCal<<" calories."<<endl;
    //Exit the program
    return 0;
}