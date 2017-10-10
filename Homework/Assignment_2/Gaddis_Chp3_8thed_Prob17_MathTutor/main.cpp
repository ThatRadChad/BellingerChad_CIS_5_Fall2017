/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 19, 2017, 12:24 PM
 * Purpose: Math Tutor
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <cmath>       //Mathematical Functions
#include <iomanip>     //Formatting Library
#include <cstdlib>
#include <ctime>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned short op1, op2, stuAns, result;
    
    //Initialize Variables
    op1=rand()%900+100; //[100-999] 3 Digit Random Number 
    op2=rand()%900+100;;
    
    //Prompt User for the Result
    cout<<"This program tests your addition capability"<<endl;
    cout<<"Type the answer"<<endl;
    cout<<setw(6)<<op1<<endl;
    cout<<"+"<<setw(5)<<op2<<endl;
    cout<<"------"<<endl;
    cin>>stuAns;
    
    //Calculate the result
    result=op1+op2;
    
    //Output the result
    cout<<"The result = "<<result<<endl;
    cout<<((result==stuAns)?"Correct":"Incorrect");
    
    //Display/Output all pertinent variables
            
    //Exit the program
    return 0;
}