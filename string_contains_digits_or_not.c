#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int c=0;
        char s[100];
        scanf("%s",s);
        for(int i=0;s[i]!=0;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
    }
}