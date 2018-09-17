
/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on September 17, 2018, 1:40 PM
 * Purpose: 1D Array Structure
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries
#include "Struc1DArray.h"

//Global Constants

//Function Prototypes
int *fill1D(int);
DynAry1 *filStrc(int*, int);
void prnStrc(DynAry1 *,int);
void destroy(DynAry1 *);

/*
 * 
 */
int main(int argc, char** argv) {
    //Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int *dynAry=new int[size];
    DynAry1 *array1D=filStrc(dynAry,size);
    
    //Initialize Variables
    prnStrc(array1D,10);
    
    //Deallocate memory
    destroy(array1D);

    //Exit
    return 0;
}

int *fill1D(int n){
    int *a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;  //Random 2 digit numbers
    }
    return a;
}

DynAry1 *filStrc(int *a,int n){
    DynAry1 *d1=new DynAry1;
    d1->size=n;
    d1->array=a;
    return d1;
}

void prnStrc(DynAry1 *d1,int perLine){
    cout<<endl;
    for(int i=0;i<d1->size;i++){
        cout<<d1->array[i]<<" ";
    }
    cout<<endl;
}

void destroy ()