/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 13, 2017, 5:10 PM
 * Purpose: Annual pay of an employee
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
    float payAmnt; //Amount the employee gets paid
    float payPrds; //Pay periods per year
    float anulPay; //Annual pay the employee gets
    
    //Initialize Variables
    
    //Input Data/Variables
    payAmnt=2200; //Amount employee earns each pay period
    payPrds=26; //Number of pay periods per year      
    
    //Process or map the inputs to the outputs
    anulPay=payAmnt*payPrds;
    
    //Display/Output all pertinent variables
    cout<<"The total annual pay of this employee was $"<<anulPay<<endl;
    
    //Exit the program
    return 0;
}