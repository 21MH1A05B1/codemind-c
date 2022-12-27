#include<stdio.h>
int main()
{
    int n,m,x,c=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]<=x && b[i]>=x)
        {
            c++;
        }
    }
    printf("%d",c);
}