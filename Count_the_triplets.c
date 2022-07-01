
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int p=0;p<x;p++)
    {
        int n;
        scanf("%d",&n);
        int a[1000],i,c;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        c=0;
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(i!=j && j!=k)
                    {
                        if(a[j]+a[k]==a[i])
                        {
                            c++;
                        }
                    }
                }
            }
        }
        if(c==0)
        {
            printf("-1
");
        }
        else
            printf("%d
",c/2);
    }
}