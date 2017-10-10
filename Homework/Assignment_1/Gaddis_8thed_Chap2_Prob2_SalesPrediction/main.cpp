/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September, 12, 2017, 3:38 PM
 * Purpose: Sales prediction of how much the East Coast division will generate 
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
    float totSale; //Total sales
    float saleYear; //Sales in this year
    float eCoast;
    
    //Initialize Variables
    totSale=58; //Percent of total sales
    saleYear=8.6e6; //Sales this year in millions
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    eCoast=saleYear/totSale; //How much the East Coast Division will generate
    
    //Display/Output all pertinent variables
    cout<<"The East Coast Division will generate $"<<eCoast<<" in sales this year."<<endl;
    
    //Exit the program
    return 0;
}