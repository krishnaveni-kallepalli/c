#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter number:\n");
    scanf("%d",&n);//5                   0000 0101
    printf("Enter position:\n");
    scanf("%d",&pos);//1                 0000 0010
    if(n&(0x1 << pos))
        printf("Bit is 1\n");
    else
        printf("Bit is 0\n");
    n=n^(0x1<<pos);   
    printf("%d",n);//                    0000 0111 = 7
}

