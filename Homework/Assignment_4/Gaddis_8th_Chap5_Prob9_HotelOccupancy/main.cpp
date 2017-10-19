/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 18, 2017, 6:39 PM
 * Purpose: Hotel Occupancy
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
    int totRoom=0, totFloor=0, totOccR=0, occRoFl=0, rOnFlor=0;
    float pctOcc=0.0f; 
    
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Enter the number of floors: "<<endl;
        cin>>totFloor;
       while(totFloor<1)
       {
           cout<<"Number of floors must be greater than zero, enter another number. "<<endl;
           cin>>totFloor;
       }
       for(int i=1; i<=totFloor; i++)
       {
           if(i!=13);
            {
                cout<<"Enter the number of rooms on this floor: "<<endl;
                    cin>>rOnFlor;
                while(rOnFlor<10)
                {
                    cout<<"Number of rooms must be greater than 10, enter a new number"<<endl;
                        cin>>rOnFlor;
                }
            }
       cout<<"How many rooms are occupied? "<<endl;
            cin>>occRoFl;
            totRoom+=rOnFlor;
            totOccR+=occRoFl;
       }
    pctOcc=(totOccR*1.0f/totRoom)*100.0f;
    
    cout<<"The hotel has a total of "<<totRoom<<" rooms."<<endl;
    cout<<"The hotel has a total of "<<totFloor<<" floors."<<endl;
    cout<<"There are "<<totOccR<<" rooms  not available."<<endl;
    cout<<"There are "<<totRoom-totOccR<<" rooms available."<<endl;
    cout<<"The percentage of occupied rooms is "<<pctOcc<<"%"<<endl;

    //Loop and Print
    
    //Exit the program
    return 0;
}
