//Program description: to accept a number and display maximum number in it 
// If no is divisible by 2 then print--->Even number 
//else print No is not even 

//////////////////////////////////////////////////
/////////////////////////////
//Function name : Maximum
//Input:         Integer
//Output:        Integer 
//Author:       Sonawane pooja Adinath
//Date:          23/10/2023
//////////////////////////////////////////////
////ALgorithm////
/*
   START
   Accept two number from the User 
   store two number into two seperate variable 
   comapre no1 with no2 
   if no1>no2 then print no1 it is Even 
   otherwise print no2 is even 
   
*/
///////////////////////////////////////////////
//Logic of the program///////////////////////////
#include<stdio.h>
int Maximum(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
    return iNo1; 
    }
    ////////////////////////////////////////////////
    int main()
    {
        int iValue1=0;
        int iValue2=0; 
        int iRet=0; 
        /////////////Accepting input from user/////////////
        printf("Entre   first Number:\n"); 
        scanf("%d",&iValue1);

        printf("Entre a second Number:\n"); 
        scanf("%d",&iValue2); 
        //////////////Function Call/////////////////
        iRet=Maximum(iValue1,iValue2); 
        printf("Maximum Number is:%d",iRet); 
        return 0; 
        
    }
}