/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 14, 2017, 2:12 PM
 * Purpose: Stadium Seating
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
    float classA; //Seating class A
    float classB; //Seating class B
    float classC; //Seating class C
    float profit; //Profit of all tickets sold
    
    //Initialize Variables
     
    //Input Data/Variables
    classA=15; //In $
    classB=12; //In $
    classC=9;  //In $      
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"How many number of tickets were sold for seating class A?"<<endl;
        cin>>classA;
    cout<<"How many number of tickets were sold for seating class B?"<<endl;
        cin>>classB;
    cout<<"How many number of tickets were sold for seating class C?"<<endl;
        cin>>classC;
        profit=classA+classB+classC;
    cout<<"The total amount of income generated through ticket sales is "<<profit<<endl;
       
    //Exit the program
    return 0;
}