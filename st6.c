#include<stdio.h>
struct student
{
    char name[20];
    int ID;
    struct dob
    {
    	int d;
    	int m;
    	int y;
    }dob;
    int marks;
}stu;

int main()
{
    struct student stu;
    struct dob;
    scanf("%s %d %d",stu.name,&stu.ID,&stu.marks);
    scanf("%d %d %d",&stu.dob.d,&stu.dob.m,&stu.dob.y);
    printf("Name: %s\n",stu.name);
    printf("ID: %d\n",stu.ID);
    printf("DOB: %d-%d-%d\n",stu.dob.d,stu.dob.m,stu.dob.y);
    printf("Marks: %d\n",stu.marks);
    return 0;
}
