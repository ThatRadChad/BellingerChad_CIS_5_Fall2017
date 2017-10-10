/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 13, 2017, 4:31 PM
 * Purpose: Creating class template 
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
    short numOne; //Number one
    short numTwo; //Number two
    float total; //Both variables being stored
    
    //Initialize Variables
    
    //Input Data/Variables
    numOne=50; //Variable one
    numTwo=100; //Variable two
    
    //Process or map the inputs to the outputs
    total=numOne+numTwo; //Two variables added together to get the sum.
    
    //Display/Output all pertinent variables
    cout<<"The sum between these two numbers is = "<<total<<endl;
    
    //Exit the program
    return 0;
}