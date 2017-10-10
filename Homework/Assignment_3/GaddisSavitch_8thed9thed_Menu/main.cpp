/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 8, 2017, 10:45 PM
 * Purpose: Creating a menu for assignment #3
 */

//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <cmath>
using namespace std;   //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
 

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
 
//Declare Variables
    int choice;
    
    //Menu Choices
    cout<<"Which problem would you like to see?"<<endl;
    cout<<"#1 Gaddis 8th Chap4 Prob1 MinimumMaximum"<<endl;
    cout<<"#2 Gaddis 8th Chap4 Prob2 RomanNumeralCalc"<<endl;
    cout<<"#3 Gaddis 8th Chap4 Prob3 MagicDates"<<endl;
    cout<<"#4 Gaddis 8th Chap4 Prob4 AreasofRectangles"<<endl;
    cout<<"#5 Gaddis 8th Chap4 Prob5 BodyMassIndex"<<endl;
    cout<<"#6 Gaddis 8th Chap4 Prob6 Mass&Weight"<<endl;
    cout<<"#7 Gaddis 8th Chap4 Prob7 TimeCalc"<<endl;
    cout<<"#8 Gaddis 8th Chap4 Prob8 ColorMixer"<<endl;
    cout<<"#9 Gaddis 8th Chap4 Prob10 DaysInAMonth"<<endl;
    cout<<"#10 Savitch 9th Chap3 Prob1 LongDistanceCall"<<endl;
    cin>>choice;

    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    switch(choice){
    case 1:     
        //Declare Variables
        int num1, num2;
    
        //Initialize Variables
        cout<<"Enter two separate numbers"<<endl;
            cin>>num1;
            cin>>num2;
            if (num1 > num2)
        cout<<num1<<" was the larger number between the two"<<endl;
            else if (num1 < num2)
        cout<<num2<<" was the larger number between the two"<<endl;
    break;
    }
    switch(choice){
    case 2:     
        //Declare Variables
        int number; //Numbers 1-10 converted to Roman Numerals  
    
        //Initialize Variables
        cout<<"Enter a number between 1-10 and this calculator will convert it to Roman Numerals"<<endl;
            cin>>number;
        cout<<"Your number converted to Roman Numerals is "<<endl; 
        switch (number)
        {         
        case 1: cout<<"I"<<endl;
            break;
        case 2: cout<<"II"<<endl;
            break;
        case 3: cout<<"III"<<endl;
            break;
        case 4: cout<<"IV"<<endl;
            break;
        case 5: cout<<"V"<<endl;
            break;
        case 6: cout<<"VI"<<endl;
            break;
        case 7: cout<<"VII"<<endl;
            break;
        case 8: cout<<"VIII"<<endl;
            break;
        case 9: cout<<"IX"<<endl;
            break;
        case 10: cout<<"X"<<endl;
            break;
        default: cout<<"That is an invalid choice"<<endl;
        }
    break;
    }
    switch(choice){
    case 3:     
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
    break;
    }
    switch(choice){
    case 4:     
        //Declare Variables
        int length1, width1, length2, width2, tri1, tri2, area1, area2;
    
        //Initialize Variables
        cout<<"Please enter the length of the first triangle: "<<endl;
            cin>>length1;
        cout<<"Please enter the width of the first triangle: "<<endl;
            cin>>width1;
            area1=length1*width1;
        cout<<"Please enter the length of the second triangle: "<<endl;
            cin>>length2;
        cout<<"Please enter the width of the second triangle: "<<endl;
            cin>>width2;
            area2=length2*width2;   
            if (area1 > area2)
        cout<<"The first triangle you entered has a bigger area."<<endl;
           else if (area1 < area2)
        cout<<"The first second you entered has a bigger area."<<endl;
            if (area1 == area2)
        cout<<"The two triangles you entered have the same area."<<endl;        
    break;
    }
    switch(choice){
    case 5:     
        //Declare Variables
        int BMI, weight, height, height2;
    
        //Initialize Variables
        cout<<"Please your weight: "<<endl;
            cin>>weight;
        cout<<"Please enter your height: "<<endl;
            cin>>height;
            BMI=(weight*703/pow(height,2));
        cout<<"Your BMI is: "<<BMI<<endl;
            if (BMI < 18.5)
        cout<<"You are currently underweight."<<endl;
            else if (BMI >= 18.5 && 25)
        cout<<"You are the average weight."<<endl;
            else if (BMI >= 25)
        cout<<"You are overweight."<<endl;
    break;
    }
    switch(choice){
    case 6:     
        //Declare Variables
        int mass, weight;
    
        //Initialize Variables
        cout<<"Enter the mass of the object: "<<endl;
            cin>>mass;
            weight=mass*9.8;
            if (weight >= 1000)
        cout<<"The item you entered is too heavy! "<<endl;
            else if (weight <= 10)
        cout<<"The item you entered is too light!"<<endl;
        cout<<"The weight of the item you entered is: "<<weight<<endl;
    break;
    }
    switch(choice){
    case 7:     
        //Declare Variables
        float val,min,sec,hour,day; 
    
        //Initialize Variables
        cout<<"Please enter a number of minutes: "<<endl;
            cin>>val;
         
            if (val<=60)
        {
        cout<<"The number of minutes in that many seconds is "<<val/60<<" minutes"<<endl;
        }     
            else if (val>=3600&&val<=86400)
        {  
        cout<<"The number of hours in that many seconds is "<<val/3600<<" hours"<<endl;
        }
            else if (val>=86400)
        {
        cout<<"The number of days in that many seconds is "<<val/86400<<" days"<<endl;
        }
    break;
    }
    switch(choice){
    case 8:     
        //Declare Variables
        char color1, color2, red, yellow, blue; 
    
        //Initialize Variables
        cout<<"Please pick two primary colors to mix, your choices are Red, Blue, and Yellow: "<<endl;
            cin>>color1>>color2; 
        
            if (color1==red)
        {
            if (color2=blue)
        cout<<"You mixed red and blue, you made the color purple."<<endl;
            else if (color2=yellow)
        cout<<"You mixed red and yellow, you made the color orange."<<endl; 
        }     
            else if (color1=yellow)
        {  
            if (color2=red)
        cout<<"You mixed yellow and red, you made the color orange."<<endl;
            else if (color2=blue)
        cout<<"You mixed yellow and blue, you made the color green."<<endl; 
        }
            else if (color1=blue)
        {  
            if (color2=red)
        cout<<"You mixed blue and red, you made the color purple."<<endl;
            else if (color2=yellow)
        cout<<"You mixed blue and yellow, you made the color green."<<endl; 
        }
            else
        {
        cout<<"You entered invalid colors."<<endl;        
        }
    break;
    }
    switch(choice){
    case 9:      
        int year, month, days, leapyr; 
    
        //Initialize Variables
        cout<<"Enter the month (1-12):"<<endl;
            cin>>month; 
        cout<<"Enter the year:"<<endl;
            cin>>year; 
        
            if (month==4||month==6||month==9||month==11)days=30;
            else if (month==2)
        {
            bool leapyr = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (!leapyr) days = 29;
            else days = 28;
        }
            else days=31;
        cout<<"There are "<<days<<" days that month."<<endl;
    break;
    }
    switch(choice) {
    case 10:     
        //Declare Variables
        int time, min, cost;
        char day, day2;
    
        //Initialize Variables
        cout<<"What time did your call start? "<<endl;
        cout<<"Enter the time in 24-hour notation. "<<endl;
        cin>>time;
        cout<<"How long did the call last?"<<endl;
        cin>>min;
        cout<<"Enter the first two letters of the day you called on "<<endl;
        cin>>day>>day2;
    
        if (((day=='M')||(day=='m'))&&((day2=='O')||(day2=='o')))
        {
            if ((time>=8)||(time<=18))
        {
                cost=min*0.40;
        }
            else
            {
                cost=min*0.25;
            }
        }    
        else if (((day=='T')||(day=='t'))&&((day2=='U')||(day2=='u')))
        {
            if ((time>=8)||(time<=18))
        {
                cost=min*0.40;
        }
            else
            {
                cost=min*0.25;
            }
        }    
        if (((day=='W')||(day=='w'))&&((day2=='E')||(day2=='e')))
        {
            if ((time>=8)||(time<=18))
        {
                cost=min*0.40;
        }
            else
            {
                cost=min*0.25;
            }
        }  
        if (((day=='T')||(day=='t'))&&((day2=='H')||(day2=='h')))
        {
            if ((time>=8)||(time<=18))
        {
                cost=min*0.40;
        }
            else
            {
                cost=min*0.25;
            }
        }    
        if (((day=='F')||(day=='f'))&&((day2=='R')||(day2=='r')))
        {
            if ((time>=8)||(time<=18))
        {
                cost=min*0.40;
        }
            else
            {
                cost=min*0.25;
            }
        }   
        if (((day=='S')||(day=='s'))&&((day2=='A')||(day2=='a')))
        {
                cost=min*0.15;
        } 
        else if (((day=='S')||(day=='s'))&&((day2=='U')||(day2=='u')))
        {
                cost=min*0.15;
        }
        cout<<"The cost of this call was $"<<cost<<endl;
    break;
    }
    
    //Display/Output all pertinent variables
    
    //Exit the program
   
    return 0;
}

