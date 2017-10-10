/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on September 26, 2017, 2:27 PM
 * Purpose: Magic Date 
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
    int month, day, year, magic;
    
    //Initialize Variables
    cout<<"Please enter a month (in numeric form): "<<endl;
        cin>>month;
    cout<<"Please enter the date of that month: "<<endl;
        cin>>day;
    cout<<"Please enter the year (in two digit form): "<<endl;
        cin>>year;
        
        magic=(month*day);
        
        if (magic != year)
    {
    cout<<"The date you entered is not magic."<<endl;
    }
        else if (magic == year)
    {
    cout<<"The date you entered is magic!"<<endl;
    }
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
