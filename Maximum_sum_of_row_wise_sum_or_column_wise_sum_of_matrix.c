#include<stdio.h>
int main()
{
    int i,j,s=0,m,n,max1=0,max2=0,s2=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        s=0;
        for(i=0;i<m;i++)
        {
            s+=a[i][j];
        }
        if(s>max1)
        {
            max1=s;
        }
    }
    for(i=0;i<m;i++)
    {
        s2=0;
        for(j=0;j<n;j++)
        {
                s2+=a[i][j];
        }
        if(s2>max2)
        {
            max2=s2;
        }
      
    }
    if(max2>max1)
    {
        printf("%d",max2);
    }
    else
    {
        printf("%d",max1);
    }
}