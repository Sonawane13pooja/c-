//problem statement :accept 2 values from user an dperform addition 
//step1: understand the problem statement 
//conclusion: we have to accept 2 integer and perform the addition 


//step 2: write an algorithm 

      /*
      I> START 

      II> Accept  first number from user and store it into no1

      III>Accept second number from user and store it into no2

      IV> create a one variable and store a result in it as Ans 

      V> perform the addition of no1,nno2 and store it into Ans variable 

      VI> display the result 

      VII>STOP
      */
     //step 3: decide the programming language 
     //(c/c++/java/python)

     //we select C programming language 
     //step 4: write a program 

     #include<stdio.h>

     int main()
     {
        int i,j,k; 
        printf("Entre a first number:\n"); 
        scanf("%d",&i); 

        printf("Entre a second number:\n"); 
        scanf("%d",&j); 

        k=i+j; 
        printf("Addition is:%d\n",k); 

        return 0; 
     }

