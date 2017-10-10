/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 19, 2017, 11:24 AM
 * Purpose: Monthly Payment
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <cmath>       //Mathematical Functions
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int CNVMPYR=12;
const int CNVPERC=100;
//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //Knowns
    float N; //Number of months 
    float i; //%/Year
    float L;  //Loan
    //Unknowns
    float MP; //Monthly Payment
    float totPaid; //Total amount paid
    float intPaid; //Interest paid
    
    //Initialize Variables
    N=36; //36 Months
    i=1.2e1f; //12% 
    L=1e4f; //$10,000
    
    //Input Data/Variables
    i/=(CNVMPYR*CNVPERC);
    
    //Process or map the inputs to the outputs
    float temp=pow(1+i,N); //(1+r)^n
    MP=i*temp*L/(temp-1);
    MP=static_cast<int>(MP*100)/100.0f;
    totPaid=MP*N;
    intPaid=totPaid-L;
    
    //Display/Output all pertinent variables
    cout<<"Loan amount = $"<<L<<endl;
    cout<<"Interest rate = "<<i<<"%"<<endl;
    cout<<"Your monthly payment will be (without interest) $"<<MP<<endl;
    cout<<"Your monthly payment will be (with interest) $"<<MP<<endl;
    cout<<"The total you paid for this month is $"<<totPaid<<endl;      
    cout<<"The amount of interest you paid this month is $"<<intPaid<<endl;
            
    //Exit the program
    return 0;
}