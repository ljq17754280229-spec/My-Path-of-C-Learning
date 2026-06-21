#include<stdio.h>
int main(void)
{
    int m,re;
    re=1;
    scanf("%d",&m);
    for(int i=m;i>1;i--)
    {
        re=i*re;
    }
    printf("%d",re);
    return 0;
}