#include<stdio.h>


void Display()
{
   register int no=11;     //auto int no=11
      
  register  int i; //auto int i;  
  printf(" value of no:%d\n",no);
  printf("value of i:%d\n",i);

}
int main()
{
    Display(); 
    return 0; 
}