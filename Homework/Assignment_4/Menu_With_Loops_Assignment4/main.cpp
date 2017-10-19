/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on October 19, 2017, 1:25 AM
 * Purpose:  Menu with Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include<cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float INCREASE=0.04; //4% increase throughout six years
const float YEARS=6; //A span of six years

const float GRAVITY=6.673e-8f; //Universal Gravitational constant 
const float CNVCMFT=1/30.48f;  //Conversion: 30.48cm per ft
const float CNVMFT =5280.0f;   //Conversion: 5280ft per mile
const float CNVGMKG=1000.0f;   //Conversion: 100 grams to 1 kilograms
const float REARTH =3959.0f;   //Radius of the earth
const float MEARTH =5.972e24f; //Mass of the earth

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Gaddis 8th Chap5 Prob1 SumOfNumbers"<<endl;
        cout<<"2. Gaddis 8th Chap5 Prob3 OceanLevels"<<endl;
        cout<<"3. Gaddis 8th Chap5 Prob4 CaloriesBurned"<<endl;
        cout<<"4. Gaddis 8th Chap5 Prob5 MembershipFeeIncrease"<<endl;
        cout<<"5. Gaddis 8th Chap5 Prob6 DistanceTraveled"<<endl;
        cout<<"6. Gaddis 8th Chap5 Prob7 PenniesForPay"<<endl;
        cout<<"7. Gaddis 8th Chap5 Prob9 HotelOccupancy"<<endl;
        cout<<"8. Gaddis 8th Chap5 Prob23 PatternDisplay"<<endl;
        cout<<"9. Savitch 8th Chap4 Prob7 Weight"<<endl;
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
                //Declare Variables
                    int sum=0;
                    int posInt;

                    //Initialize Variables

                    //Process or map the inputs to the outputs

                    //Loop and Print
                   do{
                    cout<<"Input number [0 to stop program]: "<<endl;
                    cin>>posInt;
                    sum+=posInt;
                    if (posInt>0);
                  }while(posInt!=0);

                  cout<<"The maximum number is: "<<sum<<endl;
                                break;
            }
            case 2:{
                //Declare Variables
                    float ocnLvl=0;
                    int yrs=25;

                    //Initialize Variables

                    //Process or map the inputs to the outputs

                    //Loop and Print
                    for (int i=1; i<=yrs;i++)
                    {
                        ocnLvl+=1.5;
                        cout<<"The ocean will raise "<<ocnLvl<<" millimeters a year"
                                <<" for year "<<i<<endl;
                    }
                break;
            }
            case 3:{
                //Declare Variables
                    float calsB; 
                    float calsPM=3.6f;

                    //Initialize Variables

                    //Process or map the inputs to the outputs

                    //Loop and Print
                    for (int min=5; min<=30; min+=5)
                    {
                        calsB = min*calsPM;
                        cout<<"In "<<min<<" minutes you lost "<<calsB<<" calories."<<endl;
                    }
  
                break;
            }
            case 4:{
                //Declare Variables
                    float membshp=2500; //Price of the membership in $ 

                    //Initialize Variables

                    //Process or map the inputs to the outputs

                    //Loop and Print
                    for (int i=1; i<=YEARS; i++)
                    {
                        membshp = membshp+(membshp*INCREASE);
                        cout<<"In "<<i<<" year(s) the price will be $"<<membshp<<endl;
                    }
                break;
            }
            case 5:{
                //Declare Variables
                    float dist, speed; 
                    int time;

                    //Initialize Variables

                    //Process or map the inputs to the outputs

                    //Input Data/Variables

                    //Process or map the inputs to the outputs

                    //Display/Output all pertinent variables
                    cout<<"What is the speed of the vehicle in MPH? "<<endl;
                        cin>>speed;
                       while(speed<=0)
                       {
                           cout<<"Speed must be greater than zero enter another number. "<<endl;
                           cin>>speed;
                       }
                    cout<<"How many hours has it traveled? "<<endl;
                        cin>>time;
                       while(time<1)
                       {
                           cout<<"Time must be greater than zero, enter another number. "<<endl;
                           cin>>time;
                       }
                    cout<<"Hours   "<<"   Distance Traveled"<<endl;
                       for(int i=1; i<=time; i++)
                       {
                           dist=speed*i;
                    cout<<i<<"                 "<<dist<<endl;
                       }
                break;
            }
            case 6:{
                //Declare Variables
                        float mon=1.0, tot=0, payEDay=0; 
                        int numDays;

                        //Initialize Variables

                        //Process or map the inputs to the outputs

                        //Input Data/Variables

                        //Process or map the inputs to the outputs

                        //Display/Output all pertinent variables
                        cout<<"Enter the number of days: "<<endl;
                            cin>>numDays;
                           while(numDays<1)
                           {
                               cout<<"Number of days must be greater than zero, enter another number. "<<endl;
                               cin>>numDays;
                           }
                           for(int i=1; i<=numDays; i++)
                           {
                            payEDay=mon/100;
                            cout<<"Number of days: "<<i<<endl;
                            cout<<"You earned $"<<payEDay<<endl;
                                tot+=mon/100;
                                mon*=2;
                           }
                        cout<<"Your total earnings are $"<<tot<<endl;

                break;
            }
            case 7:{
                //Declare Variables
                        int totRoom=0, totFloor=0, totOccR=0, occRoFl=0, rOnFlor=0;
                        float pctOcc=0.0f; 

                        //Initialize Variables

                        //Process or map the inputs to the outputs

                        //Input Data/Variables

                        //Process or map the inputs to the outputs

                        //Display/Output all pertinent variables
                        cout<<"Enter the number of floors: "<<endl;
                            cin>>totFloor;
                           while(totFloor<1)
                           {
                               cout<<"Number of floors must be greater than zero, enter another number. "<<endl;
                               cin>>totFloor;
                           }
                           for(int i=1; i<=totFloor; i++)
                           {
                               if(i!=13);
                                {
                                    cout<<"Enter the number of rooms on this floor: "<<endl;
                                        cin>>rOnFlor;
                                    while(rOnFlor<10)
                                    {
                                        cout<<"Number of rooms must be greater than 10, enter a new number"<<endl;
                                            cin>>rOnFlor;
                                    }
                                }
                           cout<<"How many rooms are occupied? "<<endl;
                                cin>>occRoFl;
                                totRoom+=rOnFlor;
                                totOccR+=occRoFl;
                           }
                        pctOcc=(totOccR*1.0f/totRoom)*100.0f;

                        cout<<"The hotel has a total of "<<totRoom<<" rooms."<<endl;
                        cout<<"The hotel has a total of "<<totFloor<<" floors."<<endl;
                        cout<<"There are "<<totOccR<<" rooms  not available."<<endl;
                        cout<<"There are "<<totRoom-totOccR<<" rooms available."<<endl;
                        cout<<"The percentage of occupied rooms is "<<pctOcc<<"%"<<endl;

                break;
            }
            case 8:{
                //Display/Output all pertinent variables
                  for(int cnt1=1,cnt2=19,cnt3=10;cnt1<=10;cnt1++,cnt2--,cnt3--){
                            //Display the first triangle
                            for (int t1=1;t1<=cnt1;t1++)cout<<"*";
                            //Display Middle Spaces
                            for (int t2=1;t2<=cnt2;t2++)cout<<" ";
                             //Display the second triangle
                            for (int t3=1;t3<=cnt3;t3++)cout<<"*";
                            cout<<endl;   
                        }
                break;
            }
            case 9:{
                //Declare Variables
                        float myMass, myWgt, actWgt;

                        //Initialize Variables
                        myMass=6.0f;

                        //Input Data/Variables
                        cout<<"This program converts your weight in lbs to"<<endl; 
                        cout<<"Your mass in slugs"<<endl;
                        cout<<"Input your actual weight in lbs"<<endl;
                        cin>>actWgt;

                        //Process or map the inputs to the outputs
                        float delta, tol=.01f;
                        float kGain=tol;
                        do{
                        myWgt=GRAVITY*CNVCMFT*CNVCMFT*CNVCMFT*MEARTH*CNVGMKG*myMass/
                                (REARTH*REARTH*CNVMFT*CNVMFT);
                            delta=actWgt-myWgt;
                            myMass+=kGain*delta;
                        }while(abs(delta)>=tol);

                        //Display/Output all pertinent variables
                        cout<<"Your weight = "<<myWgt<<" lbs"<<endl;
                        cout<<"Your mass   = "<<myMass<<" slugs"<<endl;

                break;
            }
            default:{
                cout<<"Exiting the program."<<endl;
            }
        }
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}