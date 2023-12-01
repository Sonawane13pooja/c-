//Program statement:write a c program to Average of Number 
/* Steps:
 formula :: (Sum of all observation)/total no of observation
 */
 /////////////////////////////////////////////////

 #include<stdio.h>
 float Average(int iNo1,int iNo2,int iNo3)
 {
    float fAns=0.0f;
    fAns=((iNo1 + iNo2 + iNo3)/3);
    return fAns; 

 }
 int main()
 {
    int iValue1=0;
    int iValue2=0;
    int iValue3=0; 
    
    float fRet=0.0f; 
    printf("Entre a first Number:\n");
    scanf("%d",&iValue1);

    printf("Entre a Second Number:\n"); 
    scanf("%d",&iValue2); 

    printf("Entre a Third Number:\n");
    scanf("%d",&iValue3);
    /////////////////////////////////////////////////
    //Function Call
    //////////////////////////////////////////
    fRet=Average(iValue1,iValue2,iValue3); 
    printf("Average is:%.2f",fRet);
    return 0;
 }
 

