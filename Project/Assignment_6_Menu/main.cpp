/* 
 * File:   main.cpp
 * Author: Chad Bellinger
 * Created on November 26th, 2017, 3:45 PM
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
const unsigned int MAXRAND=pow(2,31)-1;

//Function Prototypes

//Problem #3
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

//Problem #4
            void display_filtered(const int array[], int size, int n )
            {
                cout<<"Numbers greater than "<<n<<" are: ";
                for(int i=0;i<size;i++) 
                    if(array[i]>n) 
                    cout<<array[i]<<endl;
                cout<<endl; 
            }

            void fill( int array[], int size )
            {
                cout<<"Enter "<<size<<" numbers in the array: ";
                for(int i=0;i<size;i++) 
                    cin>>array[i];
            }

            void display( const int array[], int size )
            {
                cout<<"The numbers in the array are: ";
                for(int i=0;i<size;i++) 
                    cout<<array[i]<<endl;
                cout<<endl;
            }

//Problem #20
            float pRand(); //(0,1)
            float stdNorm(); 
            float filAray(float [], int);
            float mean(float [], int);
            float stdDev(float [], int);

            float filAray(float x[], int n){
                for(int i=0;i<n;i++){
                    x[i]=stdNorm();
                }
            }

            float stdDev(float x[], int n){
                float sum=0;
                float xmean=mean(x,n);
                for(int i=0;i<n;i++){
                    float delx=x[i]-xmean;
                    sum+=delx*delx;
                }
                return sqrt(sum/(n-1));
            }

            float mean(float x[], int n){
                float sum=0;
                for(int i=0;i<n;i++){
                    sum+=x[i];
                }
                return sum/n;
            }

            float stdNorm(){
                float sum=0;
                for(int i=1;i<=12;i++){
                    sum+=pRand();
                }
                return sum-6;
            }

            float pRand(){
                //The maximum random number = 2^31-1
                static const float scale=1/(pow(2,31)-1);
                return rand()*scale;
            }

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Gaddis 8th Chap6 Prob1 Largest/Smallest Arrays"<<endl;
        cout<<"2. Gaddis 8th Chap6 Prob2 Rainfall Statistics"<<endl;
        cout<<"3. Gaddis 8th Chap6 Prob3 Chips and Salsa"<<endl;
        cout<<"4. Gaddis 8th Chap6 Prob4 Falling Distance"<<endl;
        cout<<"5. Gaddis 8th Chap6 Prob20 Kinetic Energy"<<endl;
        cin>>choice;
        
        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
            cout<<"You are in Problem 1"<<endl;
                        {
                         //Declare Variables
                        int num[10];
                        int sm = 0;
                        int lrg = 0;
                        int temp = 0;

                        for (int i = 0; i < 10; i++)
                        {
                            cout << "Input number " << i+1 << ": " << endl;
                            cin >> num[i];
                        }

                        sm = num[0];
                        lrg = num[0];

                        for (int i = 1; i <= 10; i++)
                        {
                            temp = num[i];
                            if (temp < sm)
                                sm = temp;
                            if (temp > lrg)
                                lrg = temp;
                        }

                        //Initialize Variables

                        //Process or map the inputs to the outputs

                        //Display/Output all pertinent variables
                        cout << "Largest number is: " << lrg << endl;
                        cout << "Smallest number is: " << sm << endl;

                        //Exit the program
                        return 0;
                    }

                break;
            }
            case 2:{
                cout<<"You are in Problem 2"<<endl;
                        {
                       //Declare Variables
                        float rainFal[12];
                        float tot=0;
                        float avg=0;
                        float maxR=0; //Maximum rain
                        float minR=0; //Minimum rain
                        float tempR=0; 

                        //Initialize Variables
                        for(int i=0;i<12;i++){
                            cout<<"Please enter rainfall for month "<<i+1<<": ";
                            cin>>rainFal[i];
                            tot+=rainFal[i];
                        }

                        avg=tot/12;

                        maxR=rainFal[0];
                        minR=rainFal[0];

                        for(int i=0;i<12;i++){
                            tempR=rainFal[i];
                            if (tempR<minR)
                                minR=tempR;
                            if (tempR>maxR)
                                maxR=tempR;
                        }
                        //Process or map the inputs to the outputs

                        //Display/Output all pertinent variables
                        cout<<"Total rainfall was: "<<tot<<endl;
                        cout<<"Average rainfall was: "<<avg<<endl;
                        cout<<"Highest amount of rainfall was: "<<maxR<<endl;
                        cout<<"Least amount of rainfall was: "<<minR<<endl;

                        //Exit the program
                        return 0;
                    }
                break;
            }
            case 3:{
                cout<<"You are in Problem 3"<<endl;
                        {
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
                break;
            }
            case 4:{
                cout<<"You are in Problem 4"<<endl;
                            {
                            //Declare Variables
                            const int MAX_SIZE = 100;
                            int array[MAX_SIZE]={};

                            int size;
                            //Initialize Variables

                            //Process or map the inputs to the outputs

                            //Display/Output all pertinent variables
                            cout<<"Enter the number of elements in the array: ";
                            cin>>size;

                            if(size>MAX_SIZE ) size=MAX_SIZE;
                            if(size<1) size=1;

                            fill( array, size );
                            display( array, size );

                            int n;
                            cout<<"Enter a value: ";
                            cin>>n;

                            display_filtered( array, size, n );

                            //Exit the program
                            return 0;
                        }
                break;
            }
            case 5:{
                cout<<"You are in Problem 5"<<endl;
                            {
                            //Set the Random number seed
                                srand(static_cast<unsigned int>(time(0)));

                                //Declare Variables
                                const int SIZE=500000;
                                float x[SIZE]={};

                                //Initialize Variables
                                filAray(x,SIZE);

                                //Process or map the inputs to the outputs

                                //Display/Output all pertinent variables
                                cout<<"The simulated normal distribution = "
                                    <<"N("<<stdDev(x,SIZE)<<","<<mean(x,SIZE)
                                    <<")"<<endl;

                                //Exit the program
                                return 0;
                            }
                break;
            }
        }
    }while(choice>0&&choice<5);
    
    //Exit the program
    return 0;
}