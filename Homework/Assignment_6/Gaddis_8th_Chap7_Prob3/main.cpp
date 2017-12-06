/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 21st, 2017, 10:25 AM
 * Purpose:  Chips and Salsa
 *           
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
#include <string>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int getTtl(int [], int); 
 
int pOS(int [], int); 
 
int pOL(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
    const int NUM_TYPES = 5;  
    int sales[NUM_TYPES];
    string name[NUM_TYPES] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
   
    int ttlJSold,    //total jars sold
       hiSProd,      //highest sales product
       loSProd;      //lowest sales product
     
    //Initialize Variables
     for (int i = 0; i<NUM_TYPES;i++)
    {
        cout<<"Jars sold last month of " << name[i] << ": ";
        cin>>sales[i];
     
        while (sales[i] < 0)
        {   cout<<"Jars sold must be 0 or more.  Please re-enter: ";
           cin>>sales[i];
        }
    }
 
    //Process or map the inputs to the outputs
    ttlJSold = getTtl(sales, NUM_TYPES);
   
    loSProd = pOS(sales, NUM_TYPES);
 
    hiSProd = pOL(sales, NUM_TYPES);
    //Display/Output all pertinent variables
    cout<<endl<<endl;
    cout<<"     Salsa Sales Report \n\n";
    cout<<"Name              Jars Sold \n";
    cout<<"____________________________\n";
 
   
       cout<<name[0]<<"                  "<<sales[0]<<"\n";
       cout<<name[1]<<"                "<<sales[1]<< "\n";
       cout<<name[2]<<"                 "<<sales[2]<<"\n";
       cout<<name[3]<<"                   "<<sales[3]<<"\n";
       cout<<name[4]<<"                 "<<sales[4]<<"\n";  
   
   cout<<"Total Sales: "<<setw(15)<<ttlJSold<<endl;
   cout<<"High Seller: "<<name[hiSProd]<<endl;
   cout<<"Low Seller : "<<name[loSProd]<<endl;    
    
    //Exit the program
    return 0;
}

int getTtl (int array[], int numElts)
{
    int total = 0;
 
    for (int i = 0; i < numElts; i++)
        total += array[i];
    return total;
}

int pOL(int array[], int numElts)
{
    int indxLrg = 0;
   
    for (int i = 1; i < numElts; i++)
    {
        if (array[i] > array[indxLrg])
            indxLrg = i;
    }
    return indxLrg;
}
 
int pOS(int array[], int numElts)
{
    int indxSml = 0;
   
    for (int i = 1; i < numElts; i++)
    {
        if (array[i] < array[indxSml])
            indxSml = i;
    }      
    return indxSml;
}