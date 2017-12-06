/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 21st, 2017, 10:25 AM
 * Purpose:  Larger Than N
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

//Function Prototypes
void display_filtered(const int array[], int size, int n )
{
    cout<<"Numbers greater than "<<n<<" are: ";
    for(int i=0;i<size;i++) 
        if(array[i]>n) 
        cout<<array[i]<<endl;
    cout<<endl; 
}

void fill( int array[], int size )
{
    cout<<"Enter "<<size<<" numbers in the array: ";
    for(int i=0;i<size;i++) 
        cin>>array[i];
}

void display( const int array[], int size )
{
    cout<<"The numbers in the array are: ";
    for(int i=0;i<size;i++) 
        cout<<array[i]<<endl;
    cout<<endl;
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
    const int MAX_SIZE = 100;
    int array[MAX_SIZE]={};
    
    int size;
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    
    if(size>MAX_SIZE ) size=MAX_SIZE;
    if(size<1) size=1;
    
    fill( array, size );
    display( array, size );

    int n;
    cout<<"Enter a value: ";
    cin>>n;

    display_filtered( array, size, n );
    
    //Exit the program
    return 0;
}
