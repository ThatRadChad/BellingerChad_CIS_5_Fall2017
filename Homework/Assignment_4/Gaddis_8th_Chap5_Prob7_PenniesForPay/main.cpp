/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 18, 2017, 6:39 PM
 * Purpose: Pennies for Pay
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
    float mon=1.0, tot=0, payEDay=0; 
    int numDays;
    
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Enter the number of days: "<<endl;
        cin>>numDays;
       while(numDays<1)
       {
           cout<<"Number of days must be greater than zero, enter another number. "<<endl;
           cin>>numDays;
       }
       for(int i=1; i<=numDays; i++)
       {
        payEDay=mon/100;
        cout<<"Number of days: "<<i<<endl;
        cout<<"You earned $"<<payEDay<<endl;
            tot+=mon/100;
            mon*=2;
       }
    cout<<"Your total earnings are $"<<tot<<endl;
    
    //Loop and Print
    
    //Exit the program
    return 0;
}
