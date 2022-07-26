#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the temp in F:");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("C= %f",C);
    return 0;
}


