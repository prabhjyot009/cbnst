#include <stdio.h>
#include <conio.h>
#include <math.h>

double eq(double x)
{
    double f;
    f = (x * x * x) - (4 * x) - 9;
    return (f);
}
void find_intervals(double *a, double *b)
{
    double f1, f2;
    int i;
    for (i = 0; i <= 10; i++)
    {
        f1 = eq(i);
        f2 = eq(i + 1);
        if ((f1 < 0 && f2 > 0) || (f1 > 0 && f2 < 0))
        {
            printf("Intervals are:\t%d, %d\n", i, i + 1);
            *a = i;
            *b = i + 1;
        }
    }
}
void regula_falsi(double a, double b, float range)
{
    double z, c, f1, f2;
    int it;
    for (it = 1; fabs(a - b) >= range; it++)
    {
        printf("Iteration:%d\t", it);
        f1=eq(a);
        f2=eq(b);
        printf("a:%f\tb:%f\t", a, b);
        c = ((a * f2) - (b * f1)) / (f2 - f1);
        printf("c:%f\n\n", c);
        z = eq(c);
        if (z == 0.0)
            break;
        else if (z * f1 < 0)
            b = c;
        else
            a = c;
    }
}
int main()
{
    double a, b;
    float range = 0.000001;
    find_intervals(&a, &b);
    regula_falsi(a, b, range);
    return 0;
}