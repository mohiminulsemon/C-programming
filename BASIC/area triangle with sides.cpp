#include<stdio.h>
#include<math.h>
int main()
{
    int s,a,b,c,area;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area is %d",area);
    return 0;
}

