/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 30th, 2017, 1:35 PM
 * Purpose:  Sorting Order 
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
void displayArray(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables
	const int SIZE = 8;
	int array1[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
	int array2[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};

	cout << "\nContents of the first array.\n";
	displayArray(array1, SIZE);

	cout << "\nBubble sort the first array in ascending order.\n";
	bubbleSort(array1, SIZE);

	cout << "\nContents of the second array.\n";
	displayArray(array2, SIZE);

	cout << "\nSelection sort the second array in ascending order.\n";
	selectionSort(array2, SIZE);

    //Initialize Variables

    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
        
    //Exit the program
    return 0;
}

void displayArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int array[], int size)
{
	int temp;
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
			displayArray(array, size);
		}
	} while (swap);
}

void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue;

	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
		displayArray(array, size);
	}
}