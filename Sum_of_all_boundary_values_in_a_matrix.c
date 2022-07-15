#include<stdio.h>
int main()
{
    int i,j,s1=0,s2=0,m,n;
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
        for(j=0;j<n;j++)
        {
            if(i!=0 && j!=0 && i!=m-1 && j!=n-1)
            {
                 s1+=a[i][j];
            }
            else
            {
                s2+=a[i][j];
            }
        }
    }
     printf("%d",s2);
}