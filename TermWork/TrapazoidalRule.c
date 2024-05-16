#include <stdio.h>
float f(float x)
{
    return 1.0 / (1.0 + x * x);
}
float integrate(float (*func)(float), float a, float b, int n)
{
    float h = (b - a) / n;
    float sum = 0.5 * (func(a) + func(b));
    printf("x0 = %f, y0 = %f\n", a, func(a));
    for (int i = 1; i < n; i++)
    {
        float x = a + i * h;
        printf("x%d = %f, y%d = %f\n", i, x, i, func(x));
        sum += func(x);
    }
    printf("x%d = %f, y%d = %f\n", n, b, n, func(b));
    return (h * sum);
}
int main()
{
    float a, b;
    int n;
    printf("Enter Lower limit : ");
    scanf("%f", &a);
    printf("Enter Upper limit: ");
    scanf("%f", &b);
    printf("Enter the number of sub-intervals: ");
    scanf("%d", &n);
    float result = integrate(f, a, b, n);
    printf("Result: %f", result);
    return 0;
}