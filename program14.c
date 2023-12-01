//problem statement :To Accept a number from user and check wheather even or odd 
//description: to check the no is even  or not 

/*
    START
        Accept number from user
        Divide that number by 2
        If remainder is 0 then display Even
        otherwise display Odd
    STOP
*/


///////////////////////////////////////////////////////////////////////////
//
//  Function name :     CheckEven
//  Description :       It is used to check no is even or not 
//  Input :             Integer 
//  Output :            Integer 
//  Auther name :       pooja adinath sonawane 
//  Date :              02/10/2023
//
//////////////////////////////////////////////
////       Alogrithm     ///////////////////////

#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////
/// return a result in true or false 
//////////////////////////////////////
bool CheckEven(int iNo)
{
    if((iNo %2)==0)
    {
        return true; 

    }
    else
    {
        return false; 
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;//1

    printf("Entre a number:\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);// this is Function call 
    if(bRet==true)
    {
        printf("%d is an even number\n",iValue);

    }
    else
    {
        printf("%d is an odd number\n",iValue);

    }
    return 0;
    
}
