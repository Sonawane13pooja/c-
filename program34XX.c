#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0; 
    
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("Jay Ganesh..\n");
    }
}
int main()
{
    int iValue=0;
    printf("Entre number of times you want to dispaly Jay Ganesh on Screen\n"); 
    scanf("%d",&iValue);
    
    Display(iValue); 
    return 0;     
}