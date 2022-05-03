#include<stdio.h>
int main()
{
    int n,i,a[51],count=0;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=1;i<51;i++)
    {
        a[i+1]=a[i]+a[i-1];
    }
    for(i=0;i<50;i++)
    {
        if(a[i]==n)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}