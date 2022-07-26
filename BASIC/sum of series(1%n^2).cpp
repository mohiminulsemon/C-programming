#include<stdio.h>
int main()
{
    float n,sum=0,i;
    printf("Enter the value of n:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/(i*i);
    }
    printf("The sum is %f\n",sum);
    return 0;
}
