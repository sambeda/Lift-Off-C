#include <stdio.h>
void ask(int n) 
{
    int temp=n;
    int remainder, newN=0;
    while (n!=0)
    {
        remainder=n%10;
        newN=newN*10+remainder;
        n=n/10;
    }
    if (newN==temp)
    {
        printf("Yes it is a palindrome");
    }
    else
    {
        printf("No it is not a palindrome");
    }
}
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    ask(n);
}
