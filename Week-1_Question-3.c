#include <stdio.h>
int main() 
{
    float pi=3.14,r,d,C,A;
    printf("Enter the radius of the circle: \n\n");
    scanf("%f", &r);
    d= 2*r;
    C= 2*pi*r;
    A= pi*r*r;
    printf("Diameter is %f \nCircumference is %f \nArea is %f", d,C,A);
}
