/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 18, 2017, 6:39 PM
 * Purpose: Distance Traveled
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
    float dist, speed; 
    int time;
    
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"What is the speed of the vehicle in MPH? "<<endl;
        cin>>speed;
       while(speed<=0)
       {
           cout<<"Speed must be greater than zero enter another number. "<<endl;
           cin>>speed;
       }
    cout<<"How many hours has it traveled? "<<endl;
        cin>>time;
       while(time<1)
       {
           cout<<"Time must be greater than zero, enter another number. "<<endl;
           cin>>time;
       }
    cout<<"Hours   "<<"   Distance Traveled"<<endl;
       for(int i=1; i<=time; i++)
       {
           dist=speed*i;
    cout<<i<<"                 "<<dist<<endl;
       }
    //Loop and Print
    
    //Exit the program
    return 0;
}
