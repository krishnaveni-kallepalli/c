#include <stdio.h>
int main()
{
    struct
    {
        int x,y;
    } s[] = {10,20,15,25,8,75,6,2};
    int *i;
    i = s;

    printf("%d\n",*(i+3));
    return 0;
}
