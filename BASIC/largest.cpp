#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("largest number=%d",a);
    else
        printf("largest number=%d",b);
    return 0;
}
