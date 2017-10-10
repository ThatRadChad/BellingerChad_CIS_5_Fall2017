/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 14, 2017, 2:26 PM
 * Purpose: Test Average
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
    float scoreA; //Score #1
    float scoreB; //Score #2
    float scoreC; //Score #3
    float scoreD; //Score #4
    float scoreE; //Score #5
    float avg; //Average of all five scores
    
    //Initialize Variables
     
    //Input Data/Variables    
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"What was the test score for #1?"<<endl;
        cin>>scoreA;
    cout<<"What was the test score for #2?"<<endl;
        cin>>scoreB;
    cout<<"What was the test score for #3?"<<endl;
        cin>>scoreC;
    cout<<"What was the test score for #4?"<<endl;
        cin>>scoreD;
    cout<<"What was the test score for #5?"<<endl;
        cin>>scoreE;
        avg=(scoreA+scoreB+scoreC+scoreD+scoreE)/5;
    cout<<"The average for all five test scores was "<<avg<<endl;
    //Exit the program
    return 0;
}