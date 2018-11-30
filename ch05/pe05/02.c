#include <stdio.h>
int main(void)
{
    int num;
    int i = 0;
    printf("输入一个整数：\n");
    scanf("%d", &num);
    printf("%d ~ %d:\n", num, num + 10);

    while (i <= 10)
    {
        printf("%d\n", num);
        ++i;
        ++num;
    }

    return 0;
}