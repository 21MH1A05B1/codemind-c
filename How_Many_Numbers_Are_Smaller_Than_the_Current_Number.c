#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    int a[n],c,i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]>a[j])
            {
            c++;
            }
        }
         printf("%d ",c);
    }
   
}