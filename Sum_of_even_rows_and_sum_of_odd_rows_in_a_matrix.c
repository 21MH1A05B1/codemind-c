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
            if(i%2==0)
            {
                 s1+=a[i][j];
            }
            else
            {
                s2+=a[i][j];
            }
        }
    }   
    printf("%d %d",s1,s2);
}