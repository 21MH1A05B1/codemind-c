#include<stdio.h>
int main()
{
    char arr[5];
    scanf("%[^
]s",arr);
    if(arr[0]=='0' && arr[1]=='0')
    printf("12:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='1')
    printf("01:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='2')
    printf("02:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='3')
    printf("03:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='4')
    printf("04:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='5')
    printf("05:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='6')
    printf("06:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='7')
    printf("07:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='8')
    printf("08:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='0' && arr[1]=='9')
    printf("09:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='0')
    printf("10:%c%c AM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='1')
    printf("11:%c%c AM",arr[3],arr[4]);
    
    else if(arr[0]=='1' && arr[1]=='2')
    printf("12:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='3')
    printf("01:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='4')
    printf("02:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='5')
    printf("03:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='6')
    printf("04:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='7')
    printf("05:%c%c PM",arr[3],arr[4]);
    
        
    else if(arr[0]=='1' && arr[1]=='8')
    printf("06:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='1' && arr[1]=='9')
    printf("07:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='2' && arr[1]=='0')
    printf("08:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='2' && arr[1]=='1')
    printf("09:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='2' && arr[1]=='2')
    printf("10:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='2' && arr[1]=='3')
    printf("11:%c%c PM",arr[3],arr[4]);
    else if(arr[0]=='2' && arr[1]=='4')
    printf("12:%c%c PM",arr[3],arr[4]);
}