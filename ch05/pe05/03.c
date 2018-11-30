#include <stdio.h>
int main(void)
{
    const int DAYS_PER_WEEK = 7;
    int days, weeks, leftdays;

    printf("输入天数(<=0时程序结束)：\n");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days / DAYS_PER_WEEK;
        leftdays = days % DAYS_PER_WEEK;
        printf("%d天是%d周%d天\n", days, weeks, leftdays);
        printf("输入天数(<=0时程序结束)：\n");
        scanf("%d", &days);
    }
    
    printf("程序结束。\n");
}