#include <stdio.h>
void main() 
{
    int n,i=0,s=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while (n>0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    printf("The sum of digits of the number is %d",s);
}
