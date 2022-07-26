#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if((n%2)==0)
        printf("even number");
    else
        printf("odd number=");
    return 0;
}
