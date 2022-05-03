#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int sum=0,rem;          //ex 13 1*1+3*3=1+9=10
     while(sum!=1 && sum!=4)   //10 1*1+0*0=1
     {                       //square the num upto 1 come
    sum=0;
    while(num!=0)
    {
        rem=num%10;         //32=3*3+2*2=13
        sum+=(rem*rem);     //13=1*1+3*3=10
        num/=10;           //10=1*1+0*0=1
    }                       //happy number
    num=sum;//32
    }
   if(sum==1)
    printf("True");
   else
    printf("False");
}