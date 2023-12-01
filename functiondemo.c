#include<stdio.h>
//function defination 
int Addition(int no1,int no2)
{
    int Sum=0; 
    Sum=no1+no2; 
    return Sum; 

}
int main()
{
     int value1=0,value2=0;
     int Ret=0; 
     printf("entre a first number:\n"); 
     scanf("%d",&value1); 

     printf("entre a second number:\n"); 
     scanf("%d",&value2); 

     Ret=Addition(value1,value2); 
     printf("Addition is:%d\n",Ret); 

     return 0; 

}