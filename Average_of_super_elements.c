#include<stdio.h>
int main()
{
    int n,s=0,c=0,c1=0;
    scanf("%d",&n);
    int arr[n],i,j;
    float t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            s+=arr[i];
            c1++;
            arr[i]=0;
        }
    }
    if(s==0)
    {
        printf("-1");
    }
    else
    {
    t=(s*1.0)/(c1*1.0);
    printf("%.2f",t);
}
}