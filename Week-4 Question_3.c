#include<stdio.h>

struct student {
                char name[20];
                int rollno;
               };
int main( )
{
        int i,n=5;
        struct student stuarr[n];

        for(i=0; i<n; i++)
        {
                printf("Enter Name :\n");
                scanf("%s",stuarr[i].name);
                printf("Enter RollNo. :\n\n");
                scanf("%d",&stuarr[i].rollno);

        }
                return 0;
}