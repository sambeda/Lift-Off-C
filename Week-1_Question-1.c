#include <stdio.h>
void main() 
{
    float a,b,c,d,e,f;
    printf("Enter two numbers: \n\n");
    scanf("%f %f", &a, &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("Sum is %f \nDifference is %f \nProduct is %f \nDivision is %f", c,d,e,f);
}
