#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a;
        scanf("%d%d",&n,&a);
        if(n==1)
        {
            if(a%2==0)
        {
            printf("Even
");
        }
        else
        {
            printf("Odd
");
        }
        }
        else if(a%2==0)
        {
            printf("Impossible
");
        }
        else if(n%2==0)
        {
            printf("Even
");
        }
        else
        {
            printf("Odd
");
        }
    }
    
}