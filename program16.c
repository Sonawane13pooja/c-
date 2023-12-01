#include<stdio.h>
float CalculatePercentage(int iMarks,int iTotal)
{
    auto float fPercentage=0.0f;
    ////////////////////////////////////////// 
    //filtre condition
    /////////////////////////////////////
    if(iMarks>iTotal)
    {
        printf("Invalid input\n"); 
        return fPercentage; 

    }
    fPercentage=((float)iMarks/(float)iTotal*100);
    return fPercentage; 
}
int main()
{
    auto int iMarks=0; 
    auto int iTotal=0;
    auto float fRet=0;

   printf("Entre a marks of subject:\n"); 
   scanf("%d",&iMarks);

   printf("Entre a Total marks:\n"); 
   scanf("%d",&iTotal);
   //////////Function call/////////////////
   fRet=CalculatePercentage(iMarks,iTotal);
   printf("Your Percentage:%.2f",fRet);
   return 0; 

}