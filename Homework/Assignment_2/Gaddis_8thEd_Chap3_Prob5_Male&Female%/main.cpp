/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 14, 2017, 3:10 PM
 * Purpose: Male and Female Percentages
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
    float male; //Males registered in the class
    float female; //Females registered in the class
    float avg; //Average for males in the class
    float avg1; //Average for females in the class
    //Initialize Variables
     
    //Input Data/Variables    
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"How many males were registered in this class?"<<endl;
        cin>>male;
    cout<<"How many females were registered in this class?"<<endl;
        cin>>female;
        avg=male/female;
        avg1=female/male;
    cout<<"The average number of male students is "<<avg<<"%"<<endl;
    cout<<"The average number of female students is "<<avg1<<"%"<<endl;
    //Exit the program
    return 0;
}