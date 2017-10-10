/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October, 3 2017, 11:24 AM
 * Purpose: How Much is a Long Distance Call
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
    int time, min, cost;
    char day, day2;
    
    //Initialize Variables
    cout<<"What time did your call start? "<<endl;
    cout<<"Enter the time in 24-hour notation. "<<endl;
    cin>>time;
    cout<<"How long did the call last?"<<endl;
    cin>>min;
    cout<<"Enter the first two letters of the day you called on "<<endl;
    cin>>day>>day2;
    
    if (((day=='M')||(day=='m'))&&((day2=='O')||(day2=='o')))
    {
        if ((time>=8)||(time<=18))
    {
            cost=min*0.40;
    }
        else
        {
            cost=min*0.25;
        }
    }    
    else if (((day=='T')||(day=='t'))&&((day2=='U')||(day2=='u')))
    {
        if ((time>=8)||(time<=18))
    {
            cost=min*0.40;
    }
        else
        {
            cost=min*0.25;
        }
    }    
    if (((day=='W')||(day=='w'))&&((day2=='E')||(day2=='e')))
    {
        if ((time>=8)||(time<=18))
    {
            cost=min*0.40;
    }
        else
        {
            cost=min*0.25;
        }
    }  
    if (((day=='T')||(day=='t'))&&((day2=='H')||(day2=='h')))
    {
        if ((time>=8)||(time<=18))
    {
            cost=min*0.40;
    }
        else
        {
            cost=min*0.25;
        }
    }    
    if (((day=='F')||(day=='f'))&&((day2=='R')||(day2=='r')))
    {
        if ((time>=8)||(time<=18))
    {
            cost=min*0.40;
    }
        else
        {
            cost=min*0.25;
        }
    }   
    if (((day=='S')||(day=='s'))&&((day2=='A')||(day2=='a')))
    {
            cost=min*0.15;
    } 
    else if (((day=='S')||(day=='s'))&&((day2=='U')||(day2=='u')))
    {
            cost=min*0.15;
    }
    cout<<"The cost of this call was $"<<cost<<endl;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}