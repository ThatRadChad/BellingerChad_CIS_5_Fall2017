/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 28, 2017, 2:35 PM
 * Purpose: Color Mixer
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
    char color1, color2, red, yellow, blue; 
    
    //Initialize Variables
    cout<<"Please pick two primary colors to mix, your choices are Red, Blue, and Yellow: "<<endl;
        cin>>color1>>color2; 
        
        if (color1==red)
    {
             if (color2=blue)
    cout<<"You mixed red and blue, you made the color purple."<<endl;
        else if (color2=yellow)
    cout<<"You mixed red and yellow, you made the color orange."<<endl; 
    }     
        else if (color1=yellow)
    {  
             if (color2=red)
    cout<<"You mixed yellow and red, you made the color orange."<<endl;
        else if (color2=blue)
    cout<<"You mixed yellow and blue, you made the color green."<<endl; 
    }
        else if (color1=blue)
    {  
             if (color2=red)
    cout<<"You mixed blue and red, you made the color purple."<<endl;
        else if (color2=yellow)
    cout<<"You mixed blue and yellow, you made the color green."<<endl; 
    }
        else
    {
    cout<<"You entered invalid colors."<<endl;        
    }
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
