#include <stdio.h>
int square(int n) 
{
    int result;
    result=n*n;
    return result;
}
int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    int k=square(a);
    printf("The square of %d is %d", a,k);
}
