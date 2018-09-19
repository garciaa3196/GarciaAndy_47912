/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 15, 2018 4:42 PM
 * Purpose: Display a number of donations received
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(float[],int);
void prntAry(float[],int);
void SelSrt(float[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float    *donate;     //Dynamic array for Donations
    int    nDonate;     //Number of donations - Size of array
    
    //Input Values
    cout<<"How many donations have you received?"<<endl;
    cin>>nDonate;
    
    //Dynamically allocate array
    donate=new float[nDonate];
    
    //Fill Array
    fillAry(donate,nDonate);
    
    //Print Unsorted Array
    cout<<"Array of donations: ";
    prntAry(donate,nDonate);
    cout<<endl;
    
    //Sort Array
    SelSrt(donate,nDonate);
    
    //Print Array
    cout<<"Number of donations: "<<nDonate<<endl;
    cout<<"Sorted array of donations: ";
    prntAry(donate,nDonate);
    
            
    //Delete the Array
    delete []donate;
    
    //Exit
    return 0;
}
void fillAry(float a[],int n){
    cout<<"Enter the amount for each donation below in $"<<endl;
    //Fill the Array
    for(int i=0;i<n;i++){
        cout<<"Donation "<<i+1<<": $";
        cin>>a[i];
    }
    cout<<endl;
}
void SelSrt(float a[],int size){
    int i,minInd;
    float minVal;
    for(i=0;i<size;i++){
        minInd=i;
        minVal=a[i];
        for(int j=i+1;j<size;j++){
            if(a[j]<minVal){
                minVal=a[j];
                minInd=j;
            }
        }
    a[minInd] = a[i];
    a[i] = minVal;
    }
}
void prntAry(float a[],int n){
    //Print Array
    for(int i=0;i<n;i++){
        cout<<"$"<<a[i]<<" ";        
    }
    cout<<endl;
}