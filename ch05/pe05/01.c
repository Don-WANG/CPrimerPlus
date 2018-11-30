#include <stdio.h>
int main(void)
{
    const int M_H = 60;
    int minutes, hours, leftminutes;

    printf("输入分钟数(<=0时程序终止)：\n");
    scanf("%d", &minutes);

    while (minutes > 0)
    {
        hours = minutes / M_H;
        leftminutes = minutes % M_H;
        printf("%d分钟是%d小时%d分钟\n", minutes, hours, leftminutes);
        printf("输入分钟数(<=0时程序终止)：\n");
        scanf("%d", &minutes);
    }
    printf("程序终止。\n");

    return 0;
}