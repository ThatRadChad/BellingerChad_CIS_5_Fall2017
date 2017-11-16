/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15, 2017, 3:39 PM
 * Purpose: Winning Division
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 
float gSales(string);
void highest(float, float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float neSale, seSale, nwSale, swSale;
   
    //Initialize Variables
    
    //Process or map the inputs to the outputs
    for(int i=0; i<4; i++)
    {
        switch (i)
        {
        case 0:
            neSale = gSales("NE");
            break;
        case 1:
            seSale = gSales("SE");
            break;
        case 2:
            seSale = gSales("NW");
            break;
        default:
            swSale = gSales("SW");
            break;
        }
    }
    highest(neSale, seSale, nwSale, swSale);
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
float gSales(string name)
{
    float sales = 0;
    
    cout << "Please enter the sales for division " << name << " $"<<endl;
    cin >> sales;
    
    while (sales < 0)
    {
        cout << "Sales cannot be a negative number. Please re-enter: $"<<endl;
        cin >> sales;
    }
    return sales;
}

void highest(float NEsales, float SEsales, float NWsales, float SWsales)
{
    float highest=0;
    string division = "";
    
    if (NEsales > SEsales && NEsales > NWsales && SEsales > SWsales)
    {
        highest = NEsales;
        division = "North East";
    }
    
    else if (SEsales > NEsales && SEsales > NWsales && SEsales > SWsales)
    {
        highest = SEsales;
        division = "South East";
    }
    
    else if (NWsales > NEsales && NWsales > SEsales && NWsales > SWsales)
    {
        highest = NWsales;
        division = "North West";
    }
    
    else
    {
        highest = SWsales;
        division = "South West";
    }
    
    cout << "The division with highest sales is currently " << division <<
            " with total of $" << highest<<endl;
}