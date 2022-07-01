#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        int c=0;
        for (j=i+1; j<a; j++)
        {
            if (arr[j]>arr[i])
            {
                c++;
                break;
            }
            else
            {
                c+=1;
                if (j==a-1 && c>0)
                {
                    c=0;
                    break;
                }
            }
        }
        printf("%d ",c);
    }
    return 0;
}