//Problem statement:Program used to calculate percentage of total marks 
//output: it gives the percentage 
////////////////////////////////
//function name:CalculatePercentage 
//Input :Integer,Integer 
//Output:Integer,Integer
//Author :sonawane pooja adinath
//Date:22/10/2023
//////////////////////////////////////////////////////

///////program Description//////

////////////
// START
//accept one integer and store it into marks variable 
// accept second integer variable and store it into total marks of subject 
//Store a result in percentage variable
//print the percentage 
//STOP 
///////////////////////////////////////////////

//Percantage=(Marks/Total Marks)*100
#include<stdio.h>

float CalculatePercentage(int iMarks,int iTotal)

{
    auto float fPercentage=0.0f; 
    fPercentage=(((float)iMarks/(float)iTotal)*100);
    return fPercentage;   
}
int main()
{
    auto int iMarks=0;
    auto int iTotalMarks=0;
    auto float fRet=0;

    printf("Entre a Marks of Subject:\n");
    scanf("%d",&iMarks);

    printf("Entre total marks of Subject:\n");
    scanf("%d",&iTotalMarks);

    fRet=CalculatePercentage(iMarks,iTotalMarks);//Function call 
    printf("Your percentage :%.2f\n",fRet);

    return 0; 

}