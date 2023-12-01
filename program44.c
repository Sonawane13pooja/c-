//Program Statement: Program to display the factor of a given number 
//Input:Integer
//Output:Bolean
//////////////////////////////
// To Display the factor in the given range Number 

#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
    if((iNo %1)==0)
    { printf("1");}

    if((iNo%2)==0)
    { printf("2");}
    if((iNo%3)==0)
    { printf("3");}
    if((iNo%4)==0)
    { printf("4");}
    if((iNo%5)==0)
    { printf("5");}

}
int main()
{
    int iValue =0; 
    printf("Entre a Number:\n");
    scanf("%d",&iValue);
    //////////Function Call///////////
    DisplayFactors(iValue);
    return 0; 

}