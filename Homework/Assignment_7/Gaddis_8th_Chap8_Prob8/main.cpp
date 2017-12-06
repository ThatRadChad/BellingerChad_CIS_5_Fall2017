/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 30th, 2017, 1:35 PM
 * Purpose:  Search Benchmarks
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
int linearSearch(int [], int, int);
int binarySearch(int [], int, int);

const int SIZE = 20;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
    int array [SIZE] = {1, 83, 249, 387,507, 609, 729, 895, 1027, 1107, 29, 163, 
                        307, 467, 559, 673, 825, 971, 1067, 1145};

    int count1, count2;
    count1 = linearSearch(array, SIZE, 319);
    count2 = binarySearch(array,SIZE,319);
    
    cout << "Number of comparisons in linear search: " << count1 << endl;
    cout << "Number of comparisons for binary search: " << count2 << endl;
    
    //Initialize Variables

    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
        
    //Exit the program
    return 0;
}

int linearSearch(int list[], int numElems, int value)
{
    
    int index = 0;
    int position = -1;
    int count=0;
    bool found = false;

    while (index < numElems && !found)
    {
        if (list[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
        count++;
    }
    return count;
}

int binarySearch(int array[], int size, int value)
{
    int srst = 0,
        last = size - 1,
        middle,
        position = -1;
    int count = 0;
    
    bool found = false;
    
    while (!found && srst <= last)
    {
        middle = (srst + last) / 2;
        
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
        {
            last = middle - 1;
            count++;
        }
        else
        {
            srst = middle + 1;
            count++;
        }
        count++;
    }
    return count;
}
