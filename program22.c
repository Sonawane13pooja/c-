#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard==1)
    {
        printf("Exam time at 8 AM\n"); 
    }
    else if(iStandard==2)
    {
        printf("Exam time at 9 AM\n"); 
    }
    else if(iStandard==3)
    {
        printf("Exam time at 10 AM\n"); 
    }
    else if(iStandard==4)
    {
        printf("Exam time at 11 AM\n"); 
    }
    else if(iStandard==5)
    {
        printf("Exam time at 12 NOON\n");     
    }
    else
    {
      printf("Invalid Input..\n"); 

    }
}
//////////////////////////////////////////////
/////////////////Entry point function////////

int main()
{
    auto int iValue=0; 
    printf("Entre your standard:\n"); 
    scanf("%d",&iValue); 
    //Function call 
    DisplayExamTime(iValue); 
    return 0; 
    
}