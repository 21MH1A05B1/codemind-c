#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d%2 && n%2)
        {
            printf("Odd");
            return 0;
        }
        else if(d%2==0 && n%2==0)
        {
            printf("Even");
            return 0;
        }
        else
        {
            printf("Mixed");
            return 0;
        }
    }
    return 0;
}