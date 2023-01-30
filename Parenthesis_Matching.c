#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int l,i,j,k=0,f=0;
    l=strlen(s);
    char s1[100];
    for(i=0;i<l;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            s1[k++]=s[i];
        }
        else
        {
            if(k>0)
            {
                if(s1[k-1]=='{' && s[i]=='}')
                k-=1;
                else if(s1[k-1]=='[' && s[i]==']')
                k-=1;
                else if(s1[k-1]=='(' && s[i]==')')
                k-=1;
                else
                {
                    printf("%d",i+1);
                    f=1;
                    break;
                }
            }
            else
            {
                printf("%d",i+1);
                f=1;
                break;
            }
        }
    }
    if(f==0)
    {
        if(k==0)
        {
            printf("0");
        }
        else
        {
            printf("%d",l+1);
        }
    }
}