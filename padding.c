#include<stdio.h>
#include<stdlib.h>
/*
#pragma pack(1)
struct padding
{
    char a;
    int c;
    char b;
    
};
int main()
{
    struct padding s;
    printf("%ld",sizeof(s));
}*/
//Declare struct elements on heap : struct containing char[] and self ref pointer
//compare the 2 struct [ as above ] and see if they are same  [ they need to compare char[] of 2 structs ]
struct self
{
    char name[20];
    struct self *ptr;
};
struct self1
{
    char name1[20];
};
int main()
{
    struct self *s;
    struct self1 s1;
    s=(struct self*)malloc(sizeof(struct self));
    scanf("%s",s->name);
    printf("Name:%s",s->name);
    printf("\n");
    scanf("%s",s1.name1);
    printf("Name:%s",s1.name1);
    printf("\n");
    //int x=(s->name==s1.name1)?1:0;
    while(s->name[i]==s1.name[i])
    {
        i++;
        flag=1;
    }
    printf("both are same\n");
    
  /*  if(x==1)
    {
        printf("both are same\n");
    }
    else
    {
    	printf("not same\n");
    }
      return 0;*/
}
