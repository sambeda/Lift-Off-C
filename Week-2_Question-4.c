#include<stdio.h>
void main()
{
  int array[20],a,b,max=0,min=0;

printf("Number of elements: \n");
scanf("%d",&b);
printf("Enter the elements of array: \n");

for(a=0;a<b;a++)
scanf("%d",&array[a]);

for(a=0;a<b;a++)
min=max=array[0];

for(a=0;a<b;a++)
{
    if(array[a]>max)
    max=array[a];
    if(array[a]<min)
    min=array[a];
}
printf("Smallest element is %d\n",min);
printf("Largest element is %d\n",max);
}
