/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 27, 2017, 4:56 PM
 * Purpose: Areas of Rectangles 
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
    int length1, width1, length2, width2, tri1, tri2, area1, area2;
    
    //Initialize Variables
    cout<<"Please enter the length of the first triangle: "<<endl;
        cin>>length1;
    cout<<"Please enter the width of the first triangle: "<<endl;
        cin>>width1;
        area1=length1*width1;
    cout<<"Please enter the length of the second triangle: "<<endl;
        cin>>length2;
    cout<<"Please enter the width of the second triangle: "<<endl;
        cin>>width2;
        area2=length2*width2;   
        if (area1 > area2)
    cout<<"The first triangle you entered has a bigger area."<<endl;
        else if (area1 < area2)
    cout<<"The first second you entered has a bigger area."<<endl;
        if (area1 == area2)
    cout<<"The two triangles you entered have the same area."<<endl;        
   
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
