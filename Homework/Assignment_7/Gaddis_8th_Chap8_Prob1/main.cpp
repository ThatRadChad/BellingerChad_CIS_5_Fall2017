/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 30th, 2017, 1:35 PM
 * Purpose:  Charge Account Validation 
 *           
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int NUM_ELEMNTS=18;

//Function Prototypes
bool serAray(int,int[NUM_ELEMNTS]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
    int account[]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,4562555,
                 5552012,5050552,7825877,1250255,1005231,6545231,3852085,
                 7576651,7881200,4581002};
    int accN=0; //Account number
    bool f=true;
    //Initialize Variables

    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Enter your account number: "<<endl;
        cin>>accN;
        if (f==serAray(accN,account))
            cout<<"Account "<<accN<<" is a valid account number."<<endl;
        else 
            cout<<"Account "<<accN<<" is an invalid account number."<<endl;        
    //Exit the program
    return 0;
}

bool serAray(int val,int array[NUM_ELEMNTS])
{
    for (int i=0;i<NUM_ELEMNTS;i++)
    {
        if (val==array[i])
            return true;
    }
            return false;
}