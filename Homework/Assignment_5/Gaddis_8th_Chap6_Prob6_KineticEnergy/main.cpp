/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15, 2017, 3:39 PM
 * Purpose: Kinetic Energy
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 
float KE (int mass, int velo);

//Execution Begins Here!
int main(int argc, char** argv)
    //Declare Variables
{
    float ke = 0;
    int mass = 0;
    int velo = 0;
   
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    cout << "Input the mass in kilograms: ";
    cin >> mass;
    cout << endl;
    cout << "Input the velocity in meters: ";
    cin >> velo;
    cout << endl;
    
    ke = KE(mass, velo);
    cout << "The kinetic energy is " << ke << endl;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
float KE(int mass, int velo)
{
    return (.5*mass) * (pow(velo,2));
}

