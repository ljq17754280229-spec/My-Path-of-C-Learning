#include<stdio.h>
void revert(char str[]);

int main(void)
{
    char str[10005];
    fgets(str,10000,stdin);
    revert(str);
    printf("%s",str);
    return 0;
}
void revert(char str[])
{
    int i,j;
    char temp;
    for(i=0;str[i]!='\n' && str[i]!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        temp=str[j];
        str[j]=str[i-1-j];
        str[i-1-j]=temp;
    }
}