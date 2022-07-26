#include<stdio.h>
int main()
{
    int a,t,r,sum=0;
    scanf("%d",&a);
    t=a;
    while(a>0)
    {
        r=a%10;
        sum=sum+r;
        a/=10;
    }
    printf("sum of the digits %d=%d",t,sum);
    return 0;
}
