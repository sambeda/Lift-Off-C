#include <stdio.h>
int gcd(int n1, int n2) 
{
    if (n2==0)
    {
        return n1;
    }
    else if(n2>n1)
    {
        return gcd(n2,n1);
    }
    else
    {
        return gcd(n2,n1%n2);
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("GCD is %d \n", gcd(a,b));
    printf("LCM is %d", (a*b)/gcd(a,b));
}
