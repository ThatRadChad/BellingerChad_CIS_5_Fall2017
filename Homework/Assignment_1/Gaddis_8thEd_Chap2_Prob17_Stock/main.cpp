/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on August 31, 2017, 12:34 PM
 * Purpose: Stock Purchase
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
    short nShrs; //Number of shares of stock
    float ppShr; //Price per share in $/share and fee as a percent
    //Share cost in $'s, Commission in $'s, Total paid in 
    float shrCost,comPaid,totPaid,fee;
    
    //Initialize Variables
    nShrs=750;
    ppShr=35;
    fee=2;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    shrCost=nShrs*ppShr;
    comPaid=shrCost*fee/100; //Convert percentage to decimal
    totPaid=shrCost+comPaid;
    
    //Display/Output all pertinent variables
    cout<<"Number of shares ="<<nShrs<<endl;
    cout<<"Share price = $"<<ppShr<<"/share"<<endl;
    cout<<"Commission fee = "<<fee<<"%"<<endl;
    cout<<"Cost of shares = $"<<shrCost<<endl;
    cout<<"Commission paid = $"<<comPaid<<endl;
    cout<<"Total amount paid = $"<<totPaid<<endl;

    //Exit the program
    return 0;
}