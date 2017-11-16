/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 15th, 2017, 6:15 PM
 * Purpose:  Menu with Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Problem #1
        float calcR(float cost, float perc )
        {
            float totC=0;
            totC=((cost/100),perc)+cost;
            return totC;
        }
  
//Problem #3
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
        
//Problem #4
        int numAcc(string reg)
        {
            int accs = 0;
            cout << "Input the number of accidents for " << reg << " :";
            cin >> accs;

            return accs;
        }
        void lowest(int r1, int r2, int r3, int r4, int r5)
        {
            int lowest = 0;
            string reg = "";

            if(r1 < r2 && r1 < r3 && r1 < r4 && r1 < r5)
            {
                lowest = r1;
                reg = "North";
            }
            else if(r2 < r1 && r2 < r3 && r2 < r4 && r2 < r5)
            {
                lowest=r2;
                reg="South";
            }
            else if(r3<r1&&r3<r2&&r3<r4&&r3<r5)
            {
                lowest=r3;
                reg="East";
            }
            else if(r4<r1&&r4<r2&&r4<r3&&r4<r5)
            {
                lowest=r4;
                reg="West";
            }
            else
            {
                lowest=r5;
                reg="Central";
            }

            cout << "Region with least accidents is "<<reg<<" with "<<lowest<<
                    " accidents.";
        }

//Problem #5
            float fDist (int time)
            {
                float dist = 0;
                const float grav = 9.8;
                dist=(.5*grav)*(pow(time,2));
                return dist;
            }        

//Problem #6
            float KE(int mass, int velo)
            {
                return (.5*mass) * (pow(velo,2));
            }

//#Problem #7
            float degC(float f)
            {
                return (f-32)*5/9;
            }

            float degC(float f,float f1,float f2,float c1,float c2)
            {
                return c1+(c2-c1)*(f-f1)/(f2-f1);
            }

//Problem #8
            int coinToss(void)
            {
                const int num[2] = {1,2}; //Generate a random number between 0-1
                int random = rand()%2;
                return random[num];
            }

//Problem #9
            float pVal(float F, float r, int n)
            {
                float P;
                P=F/(pow(1+(r*0.01),n));
                return P;
            }

//Problem #11
            float getScore();
            float findLow(float &);
            float avg();
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
                cout << "Type in test score "<<cnt++<<":"<< endl;
                cin >> score;
                return score;
            }

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Gaddis 8th Chap6 Prob1 Markup"<<endl;
        cout<<"2. Gaddis 8th Chap6 Prob3 Winning Division"<<endl;
        cout<<"3. Gaddis 8th Chap6 Prob4 Safest Driving Area"<<endl;
        cout<<"4. Gaddis 8th Chap6 Prob5 Falling Distance"<<endl;
        cout<<"5. Gaddis 8th Chap6 Prob6 Kinetic Energy"<<endl;
        cout<<"6. Gaddis 8th Chap6 Prob7 Celsius Conversion Table"<<endl;
        cout<<"7. Gaddis 8th Chap6 Prob8 Coin Toss"<<endl;
        cout<<"8. Gaddis 8th Chap6 Prob9 Present Value"<<endl;
        cout<<"9. Gaddis 8th Chap6 Prob11 Lowest Score Drop"<<endl;
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
            cout<<"You are in Problem 1"<<endl;       
                        //Declare Variables
                        {
                        float wsCost=0, perc=0, totPrc=0; //Whole sale cost and percentage

                        //Initialize Variables

                        //Process or map the inputs to the outputs
                        cout<<"Please enter a non-negative number for the whole sale price and percentage"<<endl;
                                cin>>wsCost>>perc;

                        if (wsCost<0||perc<0)
                        {
                            cout<<"Please enter a non-negative number."<<endl;
                                cin>>wsCost>>perc;
                        }    
                        totPrc=calcR(wsCost,perc);

                        cout<<"The total price is $"<<totPrc<<endl;

                        //Input Data/Variables

                        //Process or map the inputs to the outputs

                        //Display/Output all pertinent variables

                        //Exit the program
                        return 0;
                        }
            break;
            }
            case 2:{
                cout<<"You are in Problem 2"<<endl;
                       //Declare Variables
                        {
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
                break;
            }
            case 3:{
                cout<<"You are in Problem 3"<<endl;
                        {
                        //Declare Variables
                        int accN, accS, accE, accW, accC;

                        //Initialize Variables

                        //Process or map the inputs to the outputs
                        for(int i=0; i<5; i++)
                        {
                            switch(i)
                            {
                            case 0:
                                accN = numAcc("North");
                                break;
                            case 1:
                                accS = numAcc("South");
                                break;
                            case 2:
                                accE = numAcc("East");
                                break;
                            case 3:
                                accW = numAcc("West");
                                break;
                            default:
                                accC = numAcc("Central");

                            }
                        }
                        lowest(accN, accS, accE, accW, accC);

                        //Input Data/Variables

                        //Process or map the inputs to the outputs

                        //Display/Output all pertinent variables

                        //Exit the program
                        return 0;
                    }
                break;
            }
            case 4:{
                cout<<"You are in Problem 4"<<endl;
                        //Declare Variables
                        int accN, accS, accE, accW, accC;

                        //Initialize Variables

                        //Process or map the inputs to the outputs
                        {
                        int time = 0;
                        float dist = 0;

                        for(int i=1; i<=10; i++)
                        {
                            dist = fDist(i);
                            cout<<i<< " seconds: " <<dist<<" meters."<<endl;
                        }

                        //Input Data/Variables

                        //Process or map the inputs to the outputs

                        //Display/Output all pertinent variables

                        //Exit the program
                        return 0;
                    }
                break;
            }
            case 5:{
                cout<<"You are in Problem 5"<<endl;
                        //Declare Variables
                        {
                            float ke = 0;
                            int mass = 0;
                            int velo = 0;

                            //Initialize Variables

                            //Process or map the inputs to the outputs
                            cout << "Input the mass in kilograms: ";
                            cin >> mass;
                            cout << endl;
                            cout << "Input the velocity in meters: ";
                            cin >> velo;
                            cout << endl;

                            ke = KE(mass, velo);
                            cout << "The kinetic energy is " << ke << endl;

                            //Input Data/Variables

                            //Process or map the inputs to the outputs

                            //Display/Output all pertinent variables

                            //Exit the program
                            return 0;
                        }
                break;
            }
            case 6:{
                cout<<"You are in Problem 6"<<endl;
                            {
                            //Declare Variables
                            float degCent, degFahr;//independent and dependent variable for Temp
                            float f1,f2,c1,c2;//Tabular data points

                            //Initialize Variables
                            f1=32; //Freezing Point of water 32 degrees Fahrenheit
                            f2=212;//Boiling Point of water 212 degrees Fahrenheit
                            c1=0;  //Freezing Point of water  0 degrees Centigrade
                            c2=100;//Boiling Point of water 100 degrees Centigrade

                            //Process or map the inputs to the outputs
                            cout<<"The Temperature Conversion Table"<<endl;
                            cout<<"Fahrenheit  Celsius 1   Celsius 2"<<endl;
                            cout<<fixed<<setprecision(1)<<showpoint;
                            for(int f=f1;f<=f2;f++)
                            {
                                cout<<setw(7)<<f
                                    <<setw(14)<<degC(f)
                                    <<setw(12)<<degC(f,f1,f2,c1,c2)<<endl;
                            }

                            //Input Data/Variables

                            //Process or map the inputs to the outputs

                            //Display/Output all pertinent variables

                            //Exit the program
                            return 0;
                        }
                break;
            }
            case 7:{
                cout<<"You are in Problem 7"<<endl;
                        {
                            //Declare Variables

                            //Initialize Variables

                            //Process or map the inputs to the outputs
                            srand(time(NULL));

                            string result;
                            int loop;
                            int rng;
                            cout << "Flip the coin how many times? "<<endl;
                            cin >> loop; 
                            cout << endl;
                            cout << "Loop   Result"<<endl;

                            for(int i=1; i<=loop; i++)
                            {
                                rng = coinToss();
                                if (rng == 1)
                                {
                                    result = "Heads";
                                }

                                else if (rng == 2)
                                {
                                    result = "Tails";
                                }
                                cout << setw(4) << i << setw(9) << result << endl;
                            }

                            //Input Data/Variables

                            //Process or map the inputs to the outputs

                            //Display/Output all pertinent variables

                            //Exit the program
                            return 0;
                        }
                break;
            }
            case 8:{
                cout<<"You are in Problem 8"<<endl;
                        {
                            //Declare Variables
                            float F=0; //Future Value  
                            float r=0; //Interest Value 
                            int n=0; //Number of years
                            float P=0; 

                            //Initialize Variables

                            //Process or map the inputs to the outputs
                            cout<<"Enter the amount of money you want to save: $"<<endl;
                                cin>>F;
                            cout<<"Please enter the interest rate: "<<endl;
                                cin>>r;
                            cout<<"Please enter the number of years you need to save: "<<endl;
                                cin>>n;

                            P=pVal(F,r,n);    
                            cout<<"In order to save $"<<F<<" you will need to deposit $"<<P<<endl;

                            //Input Data/Variables

                            //Process or map the inputs to the outputs

                            //Display/Output all pertinent variables

                            //Exit the program
                            return 0;
                        }
                break;
            }
            case 9:{
                cout<<"You are in Problem 9"<<endl;
                        {
                            //Declare Variables

                            //Initialize Variables

                            //Process or map the inputs to the outputs

                            //Input Data/Variables

                            //Process or map the inputs to the outputs

                            //Display/Output all pertinent variables
                            cout << " The Average 4 Highest Scores = " << avg() << endl;
                            return 0;
                        }
                break;
            }
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}