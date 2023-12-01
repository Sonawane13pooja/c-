#include<stdio.h>

//addition function 
int Addition(int No1,int No2)
{
    int iAns=No1+No2;
    return iAns; 

}

int main()
{  

    auto int ivalue1=0;
    auto int ivalue2=0; 
    auto int ans=0; 
     
     //to accepting input from users 
     printf("Entre a first number:\n"); 
     scanf("%d",&ivalue1); 

     printf("entre a second number:\n"); 
     scanf("%d",&ivalue2); 
     ans = ivalue1+ivalue2; 
     printf("Addition of two numbers:%d",ans);
    return 0; 
}