#include<stdio.h>
void Str_judge(char str[]);
int main(void)
{
    char str[100];
    scanf("%s",str);
    Str_judge(str);
    return 0;
}
void Str_judge(char str[])
{
    int i,j;
    for(i=0;str[i]!='\n' && str[i]!='\0';i++);
    for(j=0;j<i-1;j++)
    {
        if(str[j+1]<str[j])
        {
            printf("false");
            return;
        }
    }
    printf("true");

}