#include <stdio.h>
int factorial(int n) 
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("The factorial of %d is %d",a,factorial(a));
}