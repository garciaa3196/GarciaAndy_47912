
/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 7, 2018, 11:24 AM
 * Purpose: Display decimal point to 2 places
 */

//System Libraries
#include <iomanip>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    float divSale=32.5932;
    
    //Input or initialize Variables
    
    //Process/Calculations
    
    //Display Output
    cout<<"divSale = "<<divSale<<endl;      //Output Actual value
    cout<<"divSale = "<<setprecision(4)<<divSale<<endl; //2 decimals places
    cout<<"divSale = "<<setprecision(2)<<divSale<<endl; //No decimal places
    cout<<"divSale = "<<setprecision(5)<<divSale<<endl; //3 decimal places
    
    //Exit
    return 0;
}

