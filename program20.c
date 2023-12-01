#include<stdio.h>
//Logical OR ||->If any condition true then it entre inside if 
//Logical AND &&->If all the conditions are TRUE then it entre inside if 

void DisplayClass(float fMarks)
{
   if((fMarks<0.0)||(fMarks>100))//Filtre
   {
    printf("Invalid Marks..\n");
   }
   if((fMarks>=0)&&(fMarks<35))
   {
    printf("You are Fail..\n"); 
   }
   else if((fMarks>=35.00)&&(fMarks<50.00))
   {
    printf("Your class is pass class\n"); 
   }
   else if((fMarks>50.00)&&(fMarks<60.00))
   {
    printf("Your class is second class\n");
   }
   else if((fMarks>=60.00)&&(fMarks<75.00))
   {
    printf("Your class is first class");
   }
   else if((fMarks>=75.00)&&(fMarks<100))
   {
    printf("Your class is first with Distincation\n"); 

   }
}
int main()
{
    float fValue=0.0f; 
    printf("Entre your percentage :\n"); 
    scanf("%f",&fValue); 
    DisplayClass(fValue); 
    
    return 0; 

}