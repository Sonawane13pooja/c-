// Problem Statement : Accept radius from user and calculate the area of circle

// Step1 : Undestand the problem statement
// Conclusion : We are going to use the formula as PI*R*R

// Step 2 : Algorithm
/*
    START
        Accept radius from user and store into RADIUS
        Create variable as PI and store value 3.14
        Calculate area PI * RADIUS * RADIUS
        Display the value of Area to the user
    STOP
*/
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function name :     CalaculateArea
//  Description :       It is used to calculate are of circle
//  Input :             Float
//  Output :            Float
//  Auther name :       pooja adinath sonawane 
//  Date :              02/10/2023
//
///////////////////////////////////////////////////////////////////////////
#define PI 3.14 // macro constant 

float CalculateArea(float fValue)
{
    auto float fAns=0.0f;
    fAns=PI*fValue *fValue; 
    return fAns; 

}
///////////////////////////////////////////////
///////////////////////////////////////////////////
  // Entry point Function
  ////////////////////////////////////////////////
  ///////////////////
  int main()
  {
    auto float fRedius=0.0f; 
    auto float fArea=0.0f;

    printf("Entre a redius of circle:\n"); 
    scanf("%f",&fRedius); 

    fArea=CalculateArea(fRedius); 
    printf("Area of circle is :%.2f",fArea); 
    return 0;
  } 