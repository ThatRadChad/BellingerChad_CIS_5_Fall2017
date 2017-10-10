/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 23, 2017, 9:32 AM
 * Purpose: How Many Widgets?
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <iomanip>
#include <cmath>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float widWt; //Weight of the widget lbs
    float palWt; //Weight on the pallet with widgets
    float pal; //Pallet without weight on it 
    float palWid; //Pallet with widget on it 
    
    //Initialize Variables
    widWt=12.5; 
    
    //Input Data/Variables    
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"How much does the empty pallet? "<<endl;
        cin>>pal;
    cout<<"How much does the pallet weigh (including widgets)? "<<endl;
        cin>>palWt;
    palWid = (palWt - pal)/12.5;
    cout<<"There are "<<palWid<<" widgets on the pallet"<<endl;
    //Exit the program
    return 0;
}