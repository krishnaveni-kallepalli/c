//declare enum inside a struct and find the size of struct
#include<stdio.h>
struct st
{
    enum e
    {
    a,b,c,d;
    };
};
int main()
{
    struct st s;
    printf("%ld",sizeof(s));
}
