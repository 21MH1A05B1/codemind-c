#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    int f=0,c=0;
    for(i=0;i<n;i++)
    {
       f=0;
        for(j=0;j<n;j++)
        {
            if(a[i]<=b[j])
            {
                b[j]=0;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            c++;
        }
    }
    printf("%d",c);
}