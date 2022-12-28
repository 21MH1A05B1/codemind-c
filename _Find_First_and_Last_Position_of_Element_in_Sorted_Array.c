#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c=-1,d=-1;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b && c==-1)
        {
            c=i;
        }
        if(a[i]==b)
        {
            d=i;
        }
    }
    printf("%d %d",c,d);
}