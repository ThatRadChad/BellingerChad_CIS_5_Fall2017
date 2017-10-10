/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 28, 2017, 1:52 PM
 * Purpose: Time Calculator
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
    float val,min,sec,hour,day; 
    
    //Initialize Variables
    cout<<"Please enter a number of minutes: "<<endl;
        cin>>val;
         
        if (val<=60)
    {
    cout<<"The number of minutes in that many seconds is "<<val/60<<" minutes"<<endl;
    }     
        else if (val>=3600&&val<=86400)
    {  
    cout<<"The number of hours in that many seconds is "<<val/3600<<" hours"<<endl;
    }
        else if (val>=86400)
    {
    cout<<"The number of days in that many seconds is "<<val/86400<<" days"<<endl;
    }
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
