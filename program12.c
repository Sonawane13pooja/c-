// Problem statement : to calculate the a cube of number 
// problem statement: Understand the problem statemnt 
// by using the formula calculate a cube of number cube=n*n*n; 

//////////////////ALGORITHM////////////////
/////STEPS
//START
// Accept one number from the user and store it into No1
//Declare the second variable for store the result 
// Calcualte the cube of number 
//Display the actual result 
//STOP
///////////////////////////////////////////////
/////////////////////////////////////

//Entry point function 

////////////////////////////////// 
#include<stdio.h>
/////////////////////////
float CalculateArea(float fValue)
{
    auto float fAns=0.0f;
    auto const float PI=3.14f;
    fAns = PI*fValue*fValue; 
    return fAns; 
}
int main()
{
    auto float fRedius=0.0f; 
    auto float fArea=0.0f; 
    
    printf("Entre a redius of circle:\n"); 
    scanf("%f",&fRedius);
    

    fArea=CalculateArea(fRedius); 

    printf("Area of circle is :%.2f\n",fArea); 
    return 0; 

}