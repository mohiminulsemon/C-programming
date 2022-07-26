#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(a==0)
    {
        x1=x2=-c/b;
        printf("roots are equal\n");
        printf("roots are %f and %f",x1,x2);

    }
    else if(d>0)
    {
        x1=(-b+sqrt(d)/2*a);
        x2=(-b-sqrt(d)/2*a);
        printf("roots are equal\n");
        printf("roots are %f and %f",x1,x2);
    }
    else
        printf("no real roots");
    return 0;

}
