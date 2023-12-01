//Program Description: Write a program to calculate minimum number 
// Output :To display minimum Number 
/////////////////.................///////////////

#include<stdio.h>

int Minimum(int iNo1,int iNo2)
{
    if(iNo1<iNo2)
    {
        return iNo1; 
    }
    else
    {
        return iNo2; 
    }
}
int main()
{
    auto int iValue1=0;
    auto int iValue2=0;; 
    auto int iRet=0; 
    printf("Entre a first number:\n");
    scanf("%d",&iValue1);

    printf("Entre a second number:\n");
    scanf("%d",&iValue2);
    //////////////////////////////////////////
    //Function call/////////////////////////
    iRet=Minimum(iValue1,iValue2);
    printf("Minimum Number is :%d",iRet);
    return 0; 

}