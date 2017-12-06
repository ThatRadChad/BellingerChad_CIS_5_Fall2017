/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 26st, 2017, 2:15 PM
 * Purpose:  Rainfall Statistics
 *           
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
    int num[10];
    int sm = 0;
    int lrg = 0;
    int temp = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Input number " << i+1 << ": " << endl;
        cin >> num[i];
    }

    sm = num[0];
    lrg = num[0];

    for (int i = 1; i <= 10; i++)
    {
        temp = num[i];
        if (temp < sm)
            sm = temp;
        if (temp > lrg)
            lrg = temp;
    }
    
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout << "Largest number is: " << lrg << endl;
    cout << "Smallest number is: " << sm << endl;

    //Exit the program
    return 0;
}
