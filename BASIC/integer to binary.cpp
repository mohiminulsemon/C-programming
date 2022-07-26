#include<stdio.h>
int main()
{
    int x,i=0,a[20],j;
    printf("enter the integer number:");
    scanf("%d",&x);
    while(x!=0)
    {
        a[i]=x%2;
        x=x/2;
        i++;
    }
    printf(" the number:");
    for (j=i-1;j>=0;j--)
        printf("%d",a[j]);
    return 0;
}
