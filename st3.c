/*#include<stdio.h>

struct student
{
    char name[20];
    int ID;
    int marks;
};

void fun(char name[],int ID,int marks);

int main()
{
    struct student stu;
    printf("Enter name,ID,marks:\n");
    scanf("%s %d %d",stu.name,&stu.ID,&stu.marks);
    fun(stu.name, stu.ID, stu.marks);
    return 0;
}

void fun(char name[],int ID,int marks)
{
    printf("Name: %s\n",name);
    printf("Roll no: %d\n",ID);
    printf("Marks: %d\n",marks);
}
*/
#include<stdio.h>
struct example
{
    char c;
    int i;
};
void fun(char* c,int* i)
{
    scanf("%c %d",c,i);
}
int main()
{
    struct example ex;
    fun(&ex.c,&ex.i);
    printf("%c %d",ex.c,ex.i);
    return 0;
}
/*
#include<stdio.h>
struct example
{
    char s[20];
    char c;
    int i;
};
void fun(char* s[20],char* c,int* i)
{
    scanf("%s %c %d",c,i);
}
int main()
{
    struct example ex;
    fun(ex.s,&ex.c,&ex.i);
    printf("%s %c %d",ex.s,ex.c,ex.i);
    return 0;
    }
*/

