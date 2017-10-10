/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 28, 2017, 3:27 PM
 * Purpose: Days in a Month
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
    int year, month, days, leapyr; 
    
    //Initialize Variables
    cout<<"Enter the month (1-12):"<<endl;
        cin>>month; 
     cout<<"Enter the year:"<<endl;
        cin>>year; 
        
        if (month==4||month==6||month==9||month==11)days=30;
        else if (month==2)
    {
        bool leapyr = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (!leapyr) days = 29;
        else days = 28;
    }
        else days=31;
    cout<<"There are "<<days<<" days that month."<<endl;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
