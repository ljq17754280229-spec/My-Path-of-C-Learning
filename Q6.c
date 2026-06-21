#include<stdio.h>
int main(void)
{
    int i,j;
    i=1;
    for(j=1;j<10;j++)
    {
        i=(i+1)*2;
    }
    printf("%d\n",i);
    return 0;
}