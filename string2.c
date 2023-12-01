#include<stdio.h>
int main()
{
    char Arr[20];
    printf("Entre your Name:\n"); 
    scanf("%[^\n]s",Arr); //entre yet nhi topariyant de 
    printf("Your name is :%s\n",Arr);

    return 0; 

}