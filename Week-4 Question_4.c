#include<stdio.h>
union book
{
char name [30],author[20];
};
void main()
{
	union book B;
	printf("Enter the Book's name: \n");
	fgets(B.name,30,stdin);
	printf("Name of the book: %s\n",B.name);
	printf("Enter the author:\n");
	fgets(B.author,20,stdin);
	printf("Author's name:%s",B.author);
}

