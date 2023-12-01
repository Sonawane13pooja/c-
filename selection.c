#include<stdio.h>
int main()
//sequence 
{
    int Ans=0; 
   int No=0;
   printf("entre a number:");
   scanf("%d",&No);
   // logic  
   Ans=No%2;
   //selection 
   if(Ans==0)
   {
    printf("number is Even...\n");
   }
   else
   {
    printf("Number is Odd....\n");
   }
   return 0;
}
   