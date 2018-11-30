#include <stdio.h>
int main(void)
{
    const float CM_PER_INCH = 2.54;
    const float CM_PER_FEET = 30.48;
    int height_feet;
    float height_inch, height;
    printf("Enter a height in centimeters(<=0 to quit): ");
    scanf("%f", &height);

    while (height > 0)
    {
        height_feet = height / CM_PER_FEET;
        height_inch = (height - height_feet * CM_PER_FEET) / CM_PER_INCH;
        printf("%.1f cm = %d feet, %.1f inches\n", height, height_feet, height_inch);
        printf("Enter a height in centimeters(<=0 to quit): ");
        scanf("%f", &height);
    }

    printf("bye\n");

    return 0;
}