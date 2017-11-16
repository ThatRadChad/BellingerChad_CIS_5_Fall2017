/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15, 2017, 3:39 PM
 * Purpose: Lowest Score Drop
 */

//System Libraries
#include <iostream>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes 
float getScore();
float findLow(float &);
float avg();

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables

    //Initialize Variables
    
    //Process or map the inputs to the outputs
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
       cout << " The Average 4 Highest Scores = " << avg() << endl;
    return 0;
}
float avg()
{
    float sum;
    float lowest=findLow(sum);
    return (sum-lowest)/4;
}
float findLow(float &sum)
{
    sum=0;
    float lowest = getScore();
    sum+=lowest;
    for(int i=1; i<=4; i++)
    {
        float add=getScore();
        if(add<lowest)lowest=add;
        sum+=add;
    }
    return lowest;
}
float getScore()
{
    static int cnt=1;
    float score;
    cout << "Type in test score: " << cnt++ << endl;
    cin >> score;
    return score;
}


