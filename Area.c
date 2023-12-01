#include<stdio.h>
int main()
{
    float Radius=0.0f; 
    const float PI=3.14; 
    float Area=0.0f; 

    printf("enter a size of redius:\n");
    scanf("%f",&Radius);

    Area=PI*Radius*Radius;


   printf("Area of Circle is :%f\n",Area);
   return 0;
   
}