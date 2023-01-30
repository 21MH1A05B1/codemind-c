#include<stdio.h>
int main()
{
    char arr[8];
    scanf("%[^
]s",arr);
    if(arr[6]=='A' && arr[7]=='M')
    {
        if(arr[0]=='1' && arr[1]=='2')
        printf("00:%c%c",arr[3],arr[4]);
        else
        printf("%c%c%c%c%c",arr[0],arr[1],arr[2],arr[3],arr[4]);
    }
    else
    {
        if(arr[0]=='1' && arr[1]=='2')
        printf("%c%c%c%c%c",arr[0],arr[1],arr[2],arr[3],arr[4]);
        else
        printf("%c%c%c%c%c",arr[0]+1,arr[1]+2,arr[2],arr[3],arr[4]);
    }
}