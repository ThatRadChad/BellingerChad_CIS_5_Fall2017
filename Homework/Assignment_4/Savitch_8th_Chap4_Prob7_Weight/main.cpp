/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 17, 2017, 11:55 PM
 * Purpose: Weight Problem
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <cmath>       //For Absolute Value Function
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float GRAVITY=6.673e-8f; //Universal Gravitational constant 
const float CNVCMFT=1/30.48f;  //Conversion: 30.48cm per ft
const float CNVMFT =5280.0f;   //Conversion: 5280ft per mile
const float CNVGMKG=1000.0f;   //Conversion: 100 grams to 1 kilograms
const float REARTH =3959.0f;   //Radius of the earth
const float MEARTH =5.972e24f; //Mass of the earth

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float myMass, myWgt, actWgt;
    
    //Initialize Variables
    myMass=6.0f;
    
    //Input Data/Variables
    cout<<"This program converts your weight in lbs to"<<endl; 
    cout<<"Your mass in slugs"<<endl;
    cout<<"Input your actual weight in lbs"<<endl;
    cin>>actWgt;
    
    //Process or map the inputs to the outputs
    float delta, tol=.01f;
    float kGain=tol;
    do{
    myWgt=GRAVITY*CNVCMFT*CNVCMFT*CNVCMFT*MEARTH*CNVGMKG*myMass/
            (REARTH*REARTH*CNVMFT*CNVMFT);
        delta=actWgt-myWgt;
        myMass+=kGain*delta;
    }while(abs(delta)>=tol);
    
    //Display/Output all pertinent variables
    cout<<"Your weight = "<<myWgt<<" lbs"<<endl;
    cout<<"Your mass   = "<<myMass<<" slugs"<<endl;
    
    //Exit the program
    return 0;
}