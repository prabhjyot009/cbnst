// Newton's Forward Difference

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float u_cal(float u, int n)
{
    float temp = u;
    for (int i = 1; i < n; i++)
        temp = temp * (u - i);
    return temp;
}

int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

void main()
{
    int n = 0;
    printf("Please Enter the number of values: ");
    scanf("%d", &n);

    float x[n], y[n][n];

    printf("Please enter the values of x:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    printf("Please enter the values of y:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &y[i][0]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
    }

    printf("Displaying the forward difference table.....\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%0.2f\t\t", x[i]);
        for (int j = 0; j <= i; j++)
            printf("%0.2f\t\t", y[i][j]);

        printf("\n");
    }

    float value = 0;
    printf("Please enter the value of f\n");
    scanf("%f", &value);

    float sum = y[0][0];
    float u = (value - x[0]) / (x[1] - x[0]);
    for (int i = 1; i < n; i++)
    {
        sum = sum + (u_cal(u, i) * y[0][i]) / fact(i);
    }

    printf("Value at %0.4f is %0.4f\n", value, sum);
}