#include<iostream>
using namespace std; 
int Maximum(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0; 
    
    cout<<"Entre a first number :";
    cin>>iValue1; //get a input from user 
   // cout<<"First number is:"<<iValue1; 
    //Entre a Second number 
    cout<<"Entre a Second number :";
    cin>>iValue2;
   // cout<<"Second number:"<<iValue2;
    int iAns=Maximum(iValue1,iValue2);
    cout<<"\nMaximum number is :"<<iAns<<"\n";


    return 0;
}