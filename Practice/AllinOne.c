#include <stdio.h>
#include <conio.h>
#include <math.h>
float f(float x)
{
    return 1 / (1 + (x * x));
}
int main()
{
    int n, ch;
    float a, b;
    printf("Enter number of terms:\n");
    scanf("%d", &n);
    printf("Enter a:\n");
    scanf("%f", &a);
    printf("Enter b:\n");
    scanf("%f", &b);
    float x[n + 1], y[n + 1], h;
    h = (b - a) / n;
    for (int i = 0; i <= n; i++)
    {
        x[i] = a + i * h;
        printf("x%d = %f\t", i, x[i]);
    }
    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        y[i] = f(x[i]);
        printf("y%d = %f\t", i, y[i]);
    }
    printf("\n");
    printf("Enter your choice:\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        float sum1 = 0;
        for (int i = 1; i < n; i++)
        {
            sum1 += y[i];
        }
        float trap = (h / 2) * (y[0] + y[n] + 2 * sum1);
        printf("Result: %f", trap);
        break;
    case 2:
        float even = 0, odd = 0;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                even += y[i];
            }
            else
            {
                odd += y[i];
            }
        }
        float simponethird = (h / 3) * (y[0] + y[n] + 4 * odd + 2 * even);
        printf("Result: %f", simponethird);
        break;
    case 3:
        float three = 0, two = 0;
        for (int i = 1; i < n; i++)
        {
            if (i % 3 == 0)
            {
                three += y[i];
            }
            else
            {
                two += y[i];
            }
        }
        float simpthreeeight = (3 * h / 8) * (y[0] + y[n] + 3 * two + 2 * three);
        printf("Result: %f", simpthreeeight);
        break;
    case 4:
        float sum2 = 0;
        for (int i = 1; i < n; i++)
        {
            if (i % 3 == 0)
            {
                sum2 += 6 * y[i];
            }
            else
            {
                sum2 += 5 * y[i];
            }
        }
        float weedle = (3 * h / 10) * (y[0] + y[n] + sum2);
        printf("Result: %f", weedle);
        break;
    }
    return 0;
}