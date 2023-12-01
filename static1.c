#include<stdio.h>
#include<stdlib.h>


int main()

{
     int Arr[5];// static memory 
     float fvalue; //static memory
     double Brr[4];


     int isize =0;
     int *ptr=NULL; 
     printf("entre a size of array\n"); 
     scanf("%d",&isize); 

     ptr=(int*)malloc(isize*sizeof(int));
     
     return 0; 

}