#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter number:\n");
    scanf("%d",&n);
    printf("Enter position:\n");
    scanf("%d",&pos);
    if((n>>p)&0x1==0)
	printf("bit is already cleared \n");
    else
	printf("%d\n",n&(~(0x1<<pos)));
    return 0;
}

