#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float ac, approx, err, abs, rel, per;
    printf("Enter the actual value: ");
    scanf("%f", &ac);
    printf("Enter the approximate value: ");
    scanf("%f", &approx);
    err = ac - approx;
    abs = fabs(err);
    rel = abs / ac;
    per = rel * 100;
    printf("Error: %.4f\nAbsolute Error: %.4f\nRelative Error: %.4f\nPercentage Error: %.4f", err, abs, rel, per);
    getch();
    return 0;
}