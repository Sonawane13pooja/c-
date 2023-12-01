//Program statement: Dispaly the Examtime problem statement 
//Output:to execute the switch case statement 
///////////////////////
////Alogrithm///////////
/* START 
Execute the switch case statement according to the user input statement 
STOP
*/
//////////////////condition///////////
/* Case 1: exam Time 8 AM 
   Case 2:Exam time 9AM
   Case 3:Exam time 10 AM 
   Case 4:Exam time 11 AM 
   Case 5:Exam time 12 NOON
   */
#include<stdio.h>
//Function defination 


void DisplayExamTime(int iStandard)
{
    switch(iStandard)
    {
        case 1:
            printf("Your exam is at 8 AM\n");
            break; 
        case 2:
            printf("Your exam is at 9 AM\n"); 
            break; 
        case 3:
            printf("Your exam is at 10 AM\n"); 
            break;
        case 4:
            printf("Your exam is at 11AM\n"); 
            break; 
        case 5:
           printf("Your exam is at 12 NOON\n"); 
           break; 
        default:
           printf("Wrong input...\n");         
    }   
}

int main()
{
    auto int iValue=0; 

    printf("Entre your standard:\n");
    scanf("%d",&iValue); 

    //Function call 
    DisplayExamTime(iValue);
    return 0; 
    
}