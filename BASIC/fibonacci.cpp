#include<stdio.h>
int main()
{
    int x=0,y=1,z,n,i;
    printf("how many number you want:");
    scanf("%d",&n);
    printf("\n the fibonacci number \n");
    printf("0 1 ");
    for (i=1;i<n-1;i++)
    {
        printf("%d",x+y);
        z=y;
        y=x+y;
        x=z;
    }
    return 0;
}
