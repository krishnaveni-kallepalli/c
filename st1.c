/*
#include<stdio.h>  
struct student
{
	int ID;
	int age;
	char name[100];
	char com[100];
}emp;

int main()
{
	struct student emp={0210355,22,"krishnaveni","ThunderSoft"};
	struct student *ptr;
	ptr= &emp;
	printf("Employee details:\n");
	printf("ID:%d\n",(*ptr).ID);
	printf("Age:%d\n",(*ptr).age);
	printf("Name:%s\n",(*ptr).name);
	printf("Company_Name:%s\n",(*ptr).com);
	return 0;
}*/
#include<stdio.h>  
struct student
{
	int ID;
	int age;
	char name[100];
	char com[100];
}emp;

int main()
{
	struct student emp={0210355,22,"krishnaveni","ThunderSoft"};
	//struct student *ptr;
	//ptr= &emp;
	printf("Employee details:\n");
	printf("ID:%d\n",emp.ID);
	printf("Age:%d\n",emp.age);
	printf("Name:%s\n",emp.name);
	printf("Company_Name:%s\n",emp.com);
	return 0;
}
