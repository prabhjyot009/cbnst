#include <stdio.h>
#include <conio.h>
#include <math.h>
double eq(double x)
{
    double f;
    f = (x * x * x) - (4 * x) - 9;
    return (f);
}
double formula(double a, double b, double f1, double f2)
{
    double z;
    z = (((a * f2) - (b * f1)) / (f2 - f1));
    return (z);
}
int main()
{
    double f3, c, f1, f2, a=2, b=3;
    int i = 1;
    do
    {
        printf("Iteration:%d\t", i);
        printf("a:%f\tb:%f\t", a, b);
        f1 = eq(a);
        printf("f(a):%f\t", f1);
        f2 = eq(b);
        printf("f(b):%f\t\n", f2);
        c = formula(a, b, f1, f2);
        f3 = eq(c);
        if (f3 > 0)
            b = c;
        else
            a = c;
        i++;
    } while (fabs(f3) > 0.0005);
    printf("approx is:%f", c);
    return 0;
}