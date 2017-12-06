/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 30th, 2017, 1:35 PM
 * Purpose:  Lottery Winners
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
const int LUCKY_NUMS =10;

//Function Prototypes
int tixSrch(const int [], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare Variables 
    int winNum;     //Declares winning number
    int playerNum;  //Holds the player input
    int ticket;     //Checks if number is winner
    int lotto[LUCKY_NUMS] = {13579, 26791, 26792, 33445, 55555,
                             62483, 77777, 79422, 85647, 93121};	

    for (int week = 0; week < 10; week++)
    {
	ticket = lotto[week];
		
	cout << "Please enter your 5-digit ticket number for week " << (week + 1) << ": " << endl;
	cin >> playerNum;
	
	winNum = tixSrch(lotto, LUCKY_NUMS, playerNum); 
        
	if ((winNum == -1) || playerNum != ticket)
	{
            cout << "Sorry, you did not win.\n";
            cout << "Thanks for playing!\n\n";
	}
				
	else if (playerNum == ticket)
	{
            cout << "You have won yourself more tax payment!\n";
            cout << "Congratulations!\n\n";				
	}
    }
    //Initialize Variables

    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
        
    //Exit the program
    return 0;
}

int tixSrch(const int tixList[], int numTix, int winNum)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while ((index < numTix) && !found) 
	{
		if (tixList[index] == winNum)
		{
			found = true;
			position = index;
		}
		index ++;
	}
	return position;
}