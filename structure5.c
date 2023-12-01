#include<stdio.h>
struct Demo 
{
     int i; 
     float f; 
     int j; 

};

int main()
{
     struct Demo obj1; 
     struct Demo obj2; 
    //Creating a pointer variable 

     struct Demo*ptr=NULL; 

     //initilization 
     obj1.i=11; 
     obj1.f=24.35;
     obj1.j=45;


     ptr->i=12;
     ptr->f=24.5; 
     ptr->j=11;


     printf("%d\n",obj1.i);
     printf("%d\n",ptr->i); 


     return 0; 
}