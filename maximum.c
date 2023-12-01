#include<stdio.h>
     int Maximum(int iNo1,int iNo2)
    {
        if(iNo1>iNo2)
        {
            return iNo1; 
        }
        else
        {
           return   iNo2; 

        }
    }
    int main()
    {
        auto int iValue1=0; 
        auto int iValue2=0; 

        printf("Entre a first number:\n");
        scanf("%d",&iValue1); 

        printf("Entre a second number:\n");
        scanf("%d",&iValue2);
        auto int iAns=0;
        //function call 
        iAns=Maximum(iValue1,iValue2);
        printf("Maximum number becomes:%d",iAns);
        return 0; 

    }