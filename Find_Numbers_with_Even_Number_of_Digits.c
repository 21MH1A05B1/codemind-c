#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c2=0,c=0,temp,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        c=0;
        while(temp)
        {
            r=temp%10;
            temp/=10;
            c++;
        }
        if(c%2==0)
        {
            c2++;
        }
    }
    printf("%d",c2);
}