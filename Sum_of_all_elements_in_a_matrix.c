#include<stdio.h>
int main()
{
    int i,j,s=0,m,n;
    scanf("%d %d",&m,&n);
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
        for(j=0;j<n;j++)
        {
            s+=a[i][j];
        }
    }
    printf("%d",s);
}