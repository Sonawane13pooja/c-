

//problem statement :Accept redius from user and calculate the area of circle 

//Step1: Understand the problem statement 
//conclusion :we are going to use the formula as PI*R*R

//STEP 2 : Algorithm 

/* 
    START
    Accept redius from user and store into REDIUS 
    Create variable as PI and store value 3.14 
    Calculate area PI *REDIUS*REDIUS 
    Display the value of Area to the user 
    STOP   
*/
#include<stdio.h>
//////////////////////////////////////////////////
//////////////////////////////
// Function name : TO calculate area 
//Description :    It is used to calculate area of circle 
//Input:           Float 
//Output:          Float 
//Author name :    Sonawane Pooja Adinath 
//Date  :      21/10/2023
//
//////////////////////////////////////////////////////////////
//////////////////////////////////

 float CalculateArea(float fValue)
 {
    auto float fAns =0.0f; 
    auto float PI=3.14f; 

    fAns = PI*fValue*fValue; 
    return fAns; 

 }
 ////////////////////////////////////////////
 //////////////////
 // Entry point function 
 //
 ///////////////////////////////////////////////
 int main()
 {
    auto float fRedius=0.0f;
    auto float fArea=0.0f; 

    printf("Entre a Redius :\n"); 
    scanf("%f",&fRedius); 

    fArea=CalculateArea(fRedius);// function call 
    printf("Area of Circle is :%.2f\n",fArea); 
    return 0; 
    
 }
