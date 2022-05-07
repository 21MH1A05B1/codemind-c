#include<stdio.h>
int main()
{
    int num,remider,largest=0;
    //printf("enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        remider=num%10;
        if(largest<remider)
        {
        largest=remider;//536747643 output=7
    }
    num=num/10;
    }
    printf("%d",largest);
    return 0;
}