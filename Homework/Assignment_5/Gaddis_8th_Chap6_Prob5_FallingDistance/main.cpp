/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15, 2017, 3:39 PM
 * Purpose: Falling Distance
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 
float fDist(int time = 0);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int accN, accS, accE, accW, accC;
   
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    {
    int time = 0;
    float dist = 0;
    
    for(int i=1; i<=10; i++)
    {
        dist = fDist(i);
        cout<<i<< " seconds: " <<dist<<" meters."<<endl;
    }
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
    }
}
float fDist (int time)
{
    float dist = 0;
    const float grav = 9.8;
    dist=(.5*grav)*(pow(time,2));
    return dist;
}
