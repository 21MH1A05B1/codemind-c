#include<stdio.h>
#include<math.h>
int main()
{                              //135-->1+3*3+5*5*5=1+9+125=135
    int a,i=0,j,u,s=0,t;
    scanf("%d",&a);
    u=t=a;
    while(a!=0)
    {
        j=a%10;
        a/=10;
        i++;
    }
    j=0;
    for(;i>0;i--)
    {
        j=u%10;
        s+=pow(j,i);
        u/=10;
    }
    if(s==t)
    printf("True");
    else
    printf("False");
    return 0;
}