#include<stdio.h>
int main()
{
     char cvalue='A';
     int ivalue=11; 
     float fvalue=11.23f;
     double dvalue=23.87221;
     printf(" character value=%c\n",cvalue); 
     printf("Integer  value=%d\n",ivalue);
     // when we create float variable we should initlized the value which contains the decimal point in it.
     //at the end of initilized value we should specify f.. that f letter indicates it is float variable 
     //if that f is not specified then the complier will consider that variable as a double 
     printf("float  value=%f\n",fvalue);
     printf("double  value=%f\n",dvalue);

     return 0;  


}