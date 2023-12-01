//problem statement:Accept 2 values from user and perform the addition.
//step 1: understand the problem statement 
//conclusion: we have to accept 2 integer and perform itds addition 
//step 2: write the  algorithm 
/* START 
Accept first number from user and store it ointo no1
accept second number from user and store it into no2
create a one variable for store result 
perform a addition of two number and store a result it into result 
display the result from ans to the user 
STOP
*/
#include<stdio.h>
int main()
{
    auto int ivalue1=0;
    auto int ivalue2=0;
    auto int iAns=0; 

   printf("Entre a first number:\n");
   scanf("%d",&ivalue1);
   
   printf("Entre a second number:\n"); 
   scanf("%d",&ivalue2); 
   iAns=ivalue1+ivalue2;

   printf("Addition is:%d\n",iAns);
   return 0; 
   
}