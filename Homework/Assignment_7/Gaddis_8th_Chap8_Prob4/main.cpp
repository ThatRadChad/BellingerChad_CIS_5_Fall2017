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
const int NUM_ELE=18;

//Function Prototypes
void selcSort(int arr[NUM_ELE]);
bool binSer(int,int arr[NUM_ELE]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
    int accAray[]={2,10,12,8,7,11,19,13,16,1,17,3,15,9,5,6,18,4,14,20};
    int accN=0; //Account number
    bool f=true;
    
    cout<<"Please enter your account number:"<<endl;
        cin>>accN;
    
    selcSort(accAray);
    if (f==binSer(accN,accAray))
        cout<<"Account "<<accN<<" is a valid account"<<endl;
    else cout<<"Account "<<accN<<" is a invalid account"<<endl;
    
    for (int i=0;i<NUM_ELE;i++)
        cout<<accAray[i]<<endl;
    
    //Initialize Variables

    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
        
    //Exit the program
    return 0;
}

bool binSer(int entVal,int arr[NUM_ELE])
{
    int f=0;
    int mid=0;
    int l=NUM_ELE-1;
    int pos=0;
    
    while(f<=l)
    {
        mid=(f+l/2);
        
        if (arr[mid]==entVal)
            return true;
        else if (arr[mid]>entVal)
            l=mid-1;
        else f=mid+1;
    }
    return false;
}

void selcSort(int arr[NUM_ELE])
{
    int minInx=0;
    
    for (int i=0;i<NUM_ELE-1;i++)
    {
        int minInx=i;
        int minVal=arr[i]; 
    for (int z=i+1;z<NUM_ELE;z++)
        {
            if (arr[z]<minVal)
            {
                minVal=arr[z];
                minInx=z;   
            }
        }
        int temp=arr[i];
        arr[i]=minVal;
        arr[minInx]=temp;
    }
}