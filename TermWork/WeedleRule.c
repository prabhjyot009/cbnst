#include <stdio.h>
#include <math.h>
float f(float x)
{
    return 1.0 / (1.0 + x * x);
}
float integrate(float (*func)(float), float a, float b, int n)
{
    float h = (b - a) / n;
    float sum = func(a) + func(b);
    printf("x0 = %f, y0 = %f\n", a, func(a));
    for (int i = 1; i < n; i++)
    {
        float x = a + i * h;
        float y = func(x);
        printf("x%d = %f, y%d = %f\n", i, x, i, y);
        if (i % 6 == 0)
            sum += 2 * func(x);
        else if (i % 3 == 0)
            sum += 6 * func(x);
        else
            sum += 5 * func(x);
    }
    printf("x%d = %f, y%d = %f\n", n, b, n, func(b));
    float result = (3 * h / 10) * sum;
    return result;
}
int main()
{
    float a, b;
    int n;
    printf("Enter lower limit: ");
    scanf("%f", &a);
    printf("Enter upper limit: ");
    scanf("%f", &b);
    printf("Enter the number of subintervals (must be multiple of 6): ");
    scanf("%d", &n);
    if (n % 6 != 0)
    {
        printf("Number of subintervals must be a multiple of 6 for Weddle's rule.\n");
        return 1;
    }
    printf("Integration using Weddle's rule:\n");
    float result = integrate(f, a, b, n);
    printf("Result: %f\n", result);
    return 0;
}
