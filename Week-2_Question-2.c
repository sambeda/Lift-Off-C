#include<stdio.h>
void main()
{
    int i,sum=0,size;
    printf("Enter the size of array: \n");
    scanf("%d", &size);

    int ary[size];

    for(i=0;i<size;i++)
    {
        printf("Enter the [%d] position element in array: \n",i);
        scanf("%d", &ary[i]);
    }
    for(i=0;i<size;i++)
    {
        if (ary[i]%2==0 || i%2==0)
        {
            sum+=ary[i];
        }
    }
    printf("The sum of even elements and even position elements is %d", sum);
}
