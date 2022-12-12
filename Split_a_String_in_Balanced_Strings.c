#include<stdio.h>
int main()
{
    int c=0,x=0;
    char s[1000];
    scanf("%s",&s);
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]=='R')
        {
            c++;
        }
        else
        {
            c--;
        }
        if(c==0)
        {
            x++;
        }
    }
    printf("%d",x);
}