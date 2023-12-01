#include<stdio.h>
float CalculateArea(float fValue)
{
    auto float fAns=0.0f; 
    auto const float PI=3.14f; 
    fAns=PI *fValue*fValue; 
    return fAns; 

}
int main() // entry point function   
{
    auto float fRedius=0.0f;
    auto float fArea; 
    
    printf("entre a redius of circle:\n"); 
    scanf("%f",&fRedius);

    fArea=CalculateArea(fRedius); 

    printf("Area of circle:%.2f",fArea);
    return 0; 
    
}