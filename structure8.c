#include<stdio.h>

struct Hello{
    int no; 
    float d; 

};
struct Demo
{
    int i; 
    float f; 
    struct Hello hobj;
}dobj;
int main()
{
    dobj.i=11;
    dobj.f=90.34;
    printf("%d",sizeof(dobj)); 
    return 0; 
}