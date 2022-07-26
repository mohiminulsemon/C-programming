#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum=sum+i;
    printf("the sum is %d",sum);
    return 0;
}
