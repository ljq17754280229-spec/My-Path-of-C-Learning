#include<stdio.h>
int Fib(int N);
int main(void)
{
    int N;
    scanf("%d",&N);
    printf("%d",Fib(N));
    return 0;
}
int Fib(int N)
{
    if(N==0)
        return 0;
    if (N==1)
        return 1;
    if(N>=2)
        return Fib(N-1)+Fib(N-2);
}
