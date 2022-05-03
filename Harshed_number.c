#include<stdio.h>
int main()
{
    int num;
    int rem=0,sum=0,n;
    scanf("%d",&num);
    //make a copy of num and store it in varible n
    n=num;
    //calculate sum of digits
    while(num>0)
    {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    }
    //checks whether number is divisible by sum of digits
    if(n%sum==0)   //
    printf("True");
    else
    printf("False");
    return 0;
}