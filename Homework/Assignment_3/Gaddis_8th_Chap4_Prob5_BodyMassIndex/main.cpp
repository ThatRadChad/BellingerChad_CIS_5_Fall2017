/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 27, 2017, 5:06 PM
 * Purpose: Body Mass Index
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
    int BMI, weight, height, height2;
    
    //Initialize Variables
    cout<<"Please your weight: "<<endl;
        cin>>weight;
    cout<<"Please enter your height: "<<endl;
        cin>>height;
        BMI=(weight*703/pow(height,2));
    cout<<"Your BMI is: "<<BMI<<endl;
         if (BMI < 18.5)
    cout<<"You are currently underweight."<<endl;
         else if (BMI >= 18.5 && 25)
    cout<<"You are the average weight."<<endl;
         else if (BMI >= 25)
    cout<<"You are overweight."<<endl;
  
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
