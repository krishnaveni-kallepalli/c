#include<stdio.h>
int mystrcmp(char *s1[],char *s2[])
{
	int i=0;
	while(s1[i]!='\0'&& s2[i]!='\0')
	{
	if(s1[i]=s2[i])
	{
		printf("both strings are same\n");
	}
	else 
	{
		printf("not same\n");
	}
}
int main()
{
	char s1[100],s2[100];
	printf("Enter 2 strings\n");
	scanf("%s %s",s1,s2);
	mystrcmp(&s1,&s2);
	return 0;
}
