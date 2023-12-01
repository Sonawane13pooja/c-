#include<stdio.h>

int main()
{
     int no=11; 
     int *p=&no;
     printf("no:%d\n",no);
     printf(" address of no:%d\n",&no); 
     // pointer 
     printf(" p varaiable:%d\n",p); 
     printf(" pointer::%d\n",*p); 
     printf(" size of pointer : %d\n",sizeof(p)); 
     printf(" address of pointer:%d\n",&p); 
     printf(" size of no variable::%d\n",sizeof(no)); 
     return 0; 
} 


