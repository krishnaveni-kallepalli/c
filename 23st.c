#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char ch;
	struct node *ptr;
}n;
int main()
{
	struct node *s1,*s2;
	s1=(n*)malloc(sizeof(n));
	s2=(n*)malloc(sizeof(n));
	printf("Address of first node:%p\n",s1);
	s1->ch='A';
	s1->ptr=s2;
	printf("Address of second node:%p\n",s2);
	s2->ch='B';
	s2->ptr=NULL;
	printf("%ld",sizeof(n));
	printf("%c",s1->ptr->ch);
	
	return 0;
}
