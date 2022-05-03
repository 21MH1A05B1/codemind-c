#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)//ex 20-->factors 1,2,4,5,10,20
    {                    // except 20 remaining num add i.e 1+2+4+5+10=22>20
        if(n%i==0)          //       abundent numer
        {
            sum=sum+i;
        }
    }
    if(sum>n)
     printf("True");
    else
     printf("False");
}