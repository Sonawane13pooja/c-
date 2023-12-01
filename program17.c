#include<stdio.h>
float CalculatePercentage(int iMarks,int iTotal)
{
    auto float percentage=0.0f;

    //Filtre////////////
    if((iMarks<0)||(iTotal<0))
    {
        printf("Invalid input\n");
        return percentage;
    }
    ////////Filtre/////////////
    if(iMarks>iTotal)
    {
        printf("Invalid input\n");
        return percentage;

    } 
    percentage=(((float)iMarks/(float)iTotal)*100);
    return percentage;

}
int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto float fRet=0.0f;

    printf("Entre a marks of subject:\n");
    scanf("%d",&iValue1);

    printf("Entre a total marks of subject:\n");
    scanf("%d",&iValue2);

    //////Function call 
    fRet=CalculatePercentage(iValue1,iValue2);

    printf("Your Percentage:%f\n",fRet);
    return 0; 
    
}