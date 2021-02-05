#include <stdio.h>
int main() 
{
    float phy, chem, bio, maths, comp;
    float avg;
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &maths, &comp);
    avg= ((phy+chem+maths+bio+comp)/5);
    if(avg>90)
    {
        printf("Grade A");
    }
    else if((avg<=90) && (avg>80))
    {
        printf("Grade B");
    }
    else if((avg<=80) && (avg>70))
    {
        printf("Grade C");
    }
    else if((avg<=70) && (avg>60))
    {
        printf("Grade D");
    }
    else if((avg<=60) && (avg>40))
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
