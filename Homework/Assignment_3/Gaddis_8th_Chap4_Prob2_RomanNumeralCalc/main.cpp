/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 26, 2017, 1:20 PM
 * Purpose: Roman Numeral Calculator
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
    int number; //Numbers 1-10 converted to Roman Numerals  
    
    //Initialize Variables
    cout<<"Enter a number between 1-10 and this calculator will convert it to Roman Numerals"<<endl;
      cin>>number;
    cout<<"Your number converted to Roman Numerals is "<<endl; 
      switch (number)
    {         
        case 1: cout<<"I"<<endl;
            break;
        case 2: cout<<"II"<<endl;
            break;
        case 3: cout<<"III"<<endl;
            break;
        case 4: cout<<"IV"<<endl;
            break;
        case 5: cout<<"V"<<endl;
            break;
        case 6: cout<<"VI"<<endl;
            break;
        case 7: cout<<"VII"<<endl;
            break;
        case 8: cout<<"VIII"<<endl;
            break;
        case 9: cout<<"IX"<<endl;
            break;
        case 10: cout<<"X"<<endl;
            break;
        default: cout<<"That is an invalid choice"<<endl;
    }
      
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}