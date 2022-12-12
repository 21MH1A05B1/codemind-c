#include<stdio.h>
int main()
{
    int c=0;
    char s[1000],s2;
    scanf("%[^
]s",s);
    scanf("%s",&s2);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==s2)
            c++;
    }
    if(c!=0)
        printf("%d",c);
    else
        printf("-1");
}