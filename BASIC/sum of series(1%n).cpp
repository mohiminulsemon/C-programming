#include<stdio.h>
int main()
{
    float n,sum=0,i;
    printf("enter the value of n:");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
        sum=sum+1/i;
    printf("the sum is %f",sum);
    return 0;
}

