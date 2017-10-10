/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 27, 2017, 5:26 PM
 * Purpose: Mass and Weight
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
    int mass, weight;
    
    //Initialize Variables
    cout<<"Enter the mass of the object: "<<endl;
        cin>>mass;
        weight=mass*9.8;
        if (weight >= 1000)
    cout<<"The item you entered is too heavy! "<<endl;
        else if (weight <= 10)
    cout<<"The item you entered is too light!"<<endl;
    cout<<"The weight of the item you entered is: "<<weight<<endl;   
   
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
