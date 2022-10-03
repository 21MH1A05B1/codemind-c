#include<stdio.h>
#include<math.h>
int main()
{
    int n,dec;
    scanf("%d",&n);
    int arr[n],i,j=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dec+=arr[i]*pow(2,j);
        j--;
    }
    printf("%d",dec);
}