#include <stdio.h>
int main(void)
{
    int count, sum, days;

    count = 0;
    sum = 0;
    printf("输入天数：\n");
    scanf("%d", &days);

    while (count++ < days)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}