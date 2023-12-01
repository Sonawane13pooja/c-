#include<stdio.h>

//nested Structure 
struct Demo
{
    int i; 
    float f; 
    struct Hello
    {
        int no; 
        float d; 

    }hobj;  
}dobj; 

int main()
{
//initilization 
dobj.i=11;
dobj.f=90.99; 


//nested 
dobj.hobj.no=21; 
dobj.hobj.d=90.88; 

printf("%d\n",dobj.i); 
printf("%f\n",dobj.f);
printf("%f\n",dobj.hobj.d);
printf("%d",dobj.hobj.no); 


// main function
     return 0; 
}