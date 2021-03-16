#include <stdio.h>
int factorial(int n) 
{
    int temp=1;
    for (int i=1;i<=n;i++)
    {
        temp=temp*i;
    }
    return temp;
}
int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
}
