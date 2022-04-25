#include <stdio.h>
struct student 
{
         int id;
         char name[20];
         float marks;
};
struct student stu; // Global declaration
void fun();
int main() 
{
        printf("Enter details:\n");
 	scanf("%s %d %f",stu.name,&stu.id,&stu.marks);
        fun();
        return 0;
}

void fun()
{
         printf("ID: %d\n",stu.id);
         printf("Name:%s\n",stu.name);
         printf("Marks:%f\n",stu.marks);
}

