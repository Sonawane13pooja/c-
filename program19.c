//Program statement: program to display division according to their subject 
/*
    
    if Marks is less than 50 then its Fail 
     if per>35 and <50 
     print pass class
     
     if per>50 and per<60
     print second class
     
     if per>60 and per<75
     print first class 
     
     if per>75 and per<=100
     print first with destinction 
     */
     #include<stdio.h>
     void DisplayClass(float fMarks)
     {
        if((fMarks >=0.0)&&(fMarks<=35))
        {
            printf("You are Fail\n"); 
        }
        else if((fMarks >=35.00)&&(fMarks<50))
        {
            printf("You are in pass class\n"); 
        }
        else if((fMarks>=50.00)&&(fMarks<60.00))
        {
           printf("You are in Second class\n"); 
        }
        else if((fMarks>=60.00)&&(fMarks<75.00))
        {
            printf("you are in first class\n");
        }
        else if((fMarks>=75.00)&&(fMarks<=100.00))
        {
            printf("Your class is First with Distinction\n"); 

        }
     }
     int main()
     {
        float fValue=0.0f;

        printf("Entre your percentage:\n"); 
        scanf("%f",&fValue); 
        DisplayClass(fValue); 
        return 0; 


     }