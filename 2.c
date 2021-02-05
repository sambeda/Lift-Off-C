#include <stdio.h>
void main() 
{
    float C,F;
    printf("Enter temperature in Celsius: \n");
    scanf("%f", &C);
    F=(C*9/5)+32;
    printf("Temperature in fahrenheit is %f", F);
}
