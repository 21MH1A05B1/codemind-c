#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[1000];
    scanf("%s",s1);
    scanf("%s",s2);
    strcat(s1,s2);
    for(int i=0;s1[i]!=NULL;i++)
    {
        for(int j=0;s1[j]!=NULL;j++)
        {
            if(s1[i]<s1[j])
            {
                int temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }
    printf("%s",s1);
}