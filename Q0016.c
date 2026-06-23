#include <stdio.h>
void calculate(int nums[], char a[]);
void is_prime(int s);
int main(void)
{
    char a[105];
    int nums[26] = {0};
    scanf("%s", a);

    calculate(nums, a);
    return 0;
}
void calculate(int nums[], char a[])
{
    int i, j, max_letter, min_letter, num;
    for (i = 0; a[i] != '\0'; i++) // 算出每个字符出现次数
    {
        nums[a[i] - 'a']++; // 关键算法,ACII码映射
    }
    max_letter = nums[0];
    min_letter = 10;
    for (j = 0; j < 26; j++)
    {
        if (nums[j] > max_letter)
        {
            max_letter = nums[j];
        }
        if (nums[j] > 0 && nums[j] < min_letter)
        {
            min_letter = nums[j];
        }
    }
    num = max_letter - min_letter;
    is_prime(num);
}
void is_prime(int s)
{
    int n;
    if (s == 0 || s == 1)
    {
        printf("No Answer\n0");
    }
    else
    {
        for (n = 2; n*n < s; n++)
        {
            if (s % n == 0)
            {
                printf("No Answer\n");
                printf("0");
                return;
            }
        }
        printf("Lucky\n%d", s);
    }
}
