/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September, 12 2017, 11:56 AM
 * Purpose: Energy Drink Survey
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const char CNVPER=100; //Percent conversion

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nCustSv=16500; //Number of customers surveyed
    unsigned char pEneDrk=15; //Number of people who drink more than one energy drink a week
    unsigned char pCitDrk=58; //Number of customers who prefer Citrus flavor
    //Unknown
    unsigned short nEneDrk; //Number of customers who drink  
    unsigned short nCitDrk; //Number of people drink citrus flavor
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    nEneDrk = nCustSv*pEneDrk/CNVPER;
    nCitDrk = nEneDrk*pCitDrk/CNVPER;
    
    //Display/Output all pertinent variables
    cout<<"Number of Customers Surveyed = "<<nCustSv<<endl;
    cout<<"Percent of people who drink more than 1 energy drink a week = "
            <<static_cast<int>(pEneDrk)<<"%"<<endl;
    cout<<"Percent of customer who prefer citrus flavor = "
            <<static_cast<int>(pCitDrk)<<"%"<<endl;
    cout<<"Total number of customers surveyed who drink energy drinks = "<<nEneDrk<<endl;
    cout<<"Total number of people who drink citrus flavor = "<<nCitDrk<<endl;
    //Exit the program
    return 0;
}