#include <stdio.h>
void Temperatures(double f);
int main(void)
{
    double f;
    printf("输入一个华氏温度：");
    while (scanf("%lf", &f) == 1)
    {
        Temperatures(f);
        printf("再输入一个华氏温度：");
    }
    printf("程序结束。\n");

    return 0;
}

void Temperatures(double f)
{
    const double F_C1 = 32.0;
    const double F_C2 = 5.0 / 9.0;
    const double C_K = 273.16;
    double c, k;

    c = (f - F_C1) * F_C2;
    k = c + C_K;

    printf("华氏温度%.1f度是摄氏温度%.1f度是开氏温度%.1f度。\n", f, c, k);
}