/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 14, 2017, 2:34 PM
 * Purpose: Average Rainfall
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <cmath>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string monthA; //Month #1
    string monthB; //Month #2
    string monthC; //Month #3
    float rinfa1; //Rainfall for month #1 in inches
    float rinfa2; //Rainfall for month #2 in inches
    float rinfa3; //Rainfall for month #3 in inches
    float avg; //Average of the rainfall for three months
    
    //Initialize Variables
     
    //Input Data/Variables    
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"What was the name of this month?"<<endl;
        cin>>monthA;
    cout<<"What was the name of this month?"<<endl;
        cin>>monthB;
    cout<<"What was the name of this month?"<<endl;
        cin>>monthC;
    cout<<"What was the rainfall for month #1?"<<endl;
        cin>>rinfa1;
    cout<<"What was the rainfall for month #2?"<<endl;
        cin>>rinfa2;
    cout<<"What was the rainfall for month #3?"<<endl;
        cin>>rinfa3;
        avg=(rinfa1+rinfa2+rinfa3)/3;
    cout<<"The average rainfall between "<<monthA<<" "<<monthB<<" and "<<monthC<<" was "<<avg<<endl;
    //Exit the program
    return 0;
}