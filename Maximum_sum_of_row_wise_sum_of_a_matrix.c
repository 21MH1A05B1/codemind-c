#include<stdio.h>
int main()
{
    int i,j,m,n,s=0,max=0;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            s+=a[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
        printf("%d",max);
}