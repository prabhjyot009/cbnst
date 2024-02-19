#include <conio.h>
#include <stdio.h>
#include <math.h>
#define f(x) 3 * x - cos(x) - 1
#define g(x) 3 + sin(x)

int main()
{
    float x0 = 1, x1, f0, f1, g0, range = 0.00001;
    int steps = 1;
    do
    {
        f0 = f(x0);
        g0 = g(x0);
        x1 = x0 - (f0 / g0);
        printf("step%d\tx0:%f\tf0:%f\tx1:%f\tf1:%f\n", steps, x0, f0, x1, f1);
        x0 = x1;
        f1 = f(x1);
        steps++;
    } while (fabs(f1) > range);
    printf("Root is:%f", x1);
    return 0;
}