#include<stdio.h>
int main()
{
    int a,r;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        printf("%d",r);
        a=a/10;
    }
    return 0;
}
