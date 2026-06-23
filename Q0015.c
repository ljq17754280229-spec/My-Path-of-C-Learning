#include<stdio.h>
int main(void)
{
    int n,i,s=0;
    scanf("%d",&n);     //一共n张牌
    if(n % 3 == 0)
        printf("hua");
    else
        printf("ming");
    return 0;
}
