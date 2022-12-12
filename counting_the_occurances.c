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
        if(s2==s[i])
        c++;
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d",c);
}
}