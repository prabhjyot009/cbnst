#include <stdio.h>
#include <conio.h>
#include <math.h>

float eq(float x)
{
    float f;
    f = (x * x * x) - (5 * x) + 1;
    return (f);
}
int main()
{
    float x1=2, x2=2.5, x3, f1, f2, f3;
    int i = 1;
    do
    {
        printf("Iteration:%d\t", i);
        printf("x1:%f\tx2:%f\t", x1, x2);
        f1 = eq(x1);
        printf("value of f1:%f\t", f1);
        f2 = eq(x2);
        printf("value of f2:%f\t\n", f2);
        x3 = (((x1 * f2) - (x2 * f1)) / (f2 - f1));
        f3 = eq(x3);
        x1 = x2;
        x2 = x3;
        i++;
    } while (fabs(x2 - x1) > 0.0001);
    printf("Approximate root is:%f", x3);
    return 0;
}