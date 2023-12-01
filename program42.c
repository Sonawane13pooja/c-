#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    //   1         2       3 
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");

    }
}
int main()
{
    int iValue=0; 
    printf("Entre number of times you want to dispaly * on screen :\n");
    scanf("%d",&iValue);
  //Function Call 
    Display(iValue);
    return 0; 

}