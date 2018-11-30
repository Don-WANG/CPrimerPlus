#include <stdio.h>
double cube(double n);
int main(void)
{
    double n;
    printf("Enter a number:\n");
    scanf("%lf", &n);
    // double cube_n = cube(n);
    printf("The cube of %lf is %lf.\n", n, cube(n));

    return 0;
}

double cube(double n)
{
    return n * n * n;
}