#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=0)
        printf("positive");
    else
        printf("negative");
    return 0;
}
