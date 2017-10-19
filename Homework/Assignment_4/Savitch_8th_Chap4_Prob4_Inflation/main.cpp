/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 17, 2017, 12:25 PM
 * Purpose: Inflation Calculator
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <cmath>       //For Absolute Value Function
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int yrNow=2017, yrThen;
    float infRate, prNow, prThen;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"This program calculates inflation rate"<<endl; 
    cout<<"Year and Price of Original item"<<endl;
    cout<<"as well as price today"<<endl;
    cin>>yrThen>>prThen>>prNow;
    
    //Process or map the inputs to the outputs
    infRate=.09;
    float delta, tol=.001, prCalc;
    float kGain=.001;
    do{
        prCalc=prThen;
        for(int year=yrThen+1;year<=yrNow;year++){
            prCalc*=(1+infRate);
        }
        delta=prNow-prCalc;
        infRate+=kGain*delta;
    }while(abs(delta)>=tol);
    //Display/Output all pertinent variables
    cout<<"In "<<yrThen<<" the price = $"<<prThen<<endl;
    cout<<"in "<<yrNow<<" the price  = $"<<prNow<<endl;
    cout<<"The price calculated  = $"<<prCalc<<endl;
    cout<<"The inflation rate = "<<infRate*100.0f<<"%"<<endl;
    
    //Exit the program
    return 0;
}