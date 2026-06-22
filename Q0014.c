#include <stdio.h>
int f_count(int a, int b);
int main(void)
{
    int N_1, N_2;
    scanf("%d %d", &N_1, &N_2);
    printf("%d", f_count(N_1, N_2));

    return 0;
}
int f_count(int a, int b)
{
    int num, i, s, count = 0;
    // 找公因子和完数
    for (num = a; num <= b; num++)
    {
        s = 0;
        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                s = i + s;
            }
        }
        if (s == num)
        {
            count++;
        }
    }
    return count;
}