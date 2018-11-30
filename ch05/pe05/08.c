#include <stdio.h>
int main(void)
{
    int second, first;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d", &second);
    printf("Now enter the first operand:");
    scanf("%d", &first);
    printf("%d %% %d is %d\n", first, second, first % second);

    return 0;
}