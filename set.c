#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter number:\n");
    scanf("%d",&n);
    printf("Enter position:\n");
    scanf("%d",&pos);
    if((n>>pos)&0x1==1)
	printf("bit is set\n");
    else
	printf("%d\n",n|=(0X1<<pos));
}

