//Problem Statement : Accept 2 values from user and perform the addition.

// Step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition.

// Step 2 : Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result named as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
    STOP
*/
// Step 3: Decide the programming language (C/C++/Java/Python)
// We select C programming

// Step 4: Write the program
#include<stdio.h>
//////////////////////////////////////////////////////
////////function name :addition 
//    Description   :it is used to perform addition of two number 
//    input argument :Integer,integer 
//    output     :Integer 
//    Author   : pooja Adinath sonawane 
//    Date: 21/10/2023
int Addition(int ino1,int ino2)
   {
     int isum=0; 
     isum=ino1+ino2; 
     return isum; 

   }
   ////////////////////////////////////////////////
   ///////////
   //  entry point function which perform addition of two numbers 
   ////////////////////////////////////////////
int main()
{
     auto int ivalue1=0; 
     auto int ivalue2=0; 
     auto int iAns=0; 
    
    printf("Entre a first number:\n"); 
    scanf("%d:",&ivalue1); 

    printf("Entre a second number:\n");
    scanf("%d:",&ivalue2);
    iAns=Addition(ivalue1,ivalue2); 
    printf("Addition is :%d\n",iAns); 
    return 0; 
}

/*
Test case 1 : 
Input : 10  11
Output : 21

Test case 2 : 
Input : 10  0
Output : 10

Test case 3 : 
Input : 12  -6
Output : 6

Test case 4 : 
Input : -6  -5
Output : -11
*/
