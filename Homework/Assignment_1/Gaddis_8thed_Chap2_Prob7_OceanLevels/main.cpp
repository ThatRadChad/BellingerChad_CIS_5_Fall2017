/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 13, 2017, 4:37 PM
 * Purpose: Ocean levels rising in millimeters
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
    float fiveYrs; //Ocean level in five years
    float svnYrs; //Ocean level in seven years
    float tenYrs; //Ocean level in ten years
    float oLvlRis; //Ocean level rising 
    float amntFiv; //Amount the ocean would rise in five years
    float amntSvn; //Amount the ocean would rise in seven years
    float amntTen; //Amount the ocean would rise in ten years
    
    //Initialize Variables
    
    //Input Data/Variables
    fiveYrs=5; 
    svnYrs=7;
    tenYrs=10;
    oLvlRis=1.5; //Amount the ocean rises each year        
    
    //Process or map the inputs to the outputs
    amntFiv=oLvlRis*fiveYrs;
    amntSvn=oLvlRis*svnYrs;
    amntTen=oLvlRis*tenYrs;
            
    //Display/Output all pertinent variables
    cout<<"The ocean will raise "<<amntFiv<<" millimeters in five years"<<endl;
    cout<<"The ocean will raise "<<amntSvn<<" millimeters in seven years"<<endl;
    cout<<"The ocean will raise "<<amntTen<<" millimeters in ten years"<<endl;
    
    //Exit the program
    return 0;
}