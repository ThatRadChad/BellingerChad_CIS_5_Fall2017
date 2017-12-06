/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 26st, 2017, 2:15 PM
 * Purpose:  Rainfall Statistics
 *           
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
    float rainFal[12];
    float tot=0;
    float avg=0;
    float maxR=0; //Maximum rain
    float minR=0; //Minimum rain
    float tempR=0; 
    
    //Initialize Variables
    for(int i=0;i<12;i++){
        cout<<"Please enter rainfall for month "<<i+1<<": ";
        cin>>rainFal[i];
        tot+=rainFal[i];
    }
    
    avg=tot/12;
    
    maxR=rainFal[0];
    minR=rainFal[0];
    
    for(int i=0;i<12;i++){
        tempR=rainFal[i];
        if (tempR<minR)
            minR=tempR;
        if (tempR>maxR)
            maxR=tempR;
    }
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Total rainfall was: "<<tot<<endl;
    cout<<"Average rainfall was: "<<avg<<endl;
    cout<<"Highest amount of rainfall was: "<<maxR<<endl;
    cout<<"Least amount of rainfall was: "<<minR<<endl;

    //Exit the program
    return 0;
}
