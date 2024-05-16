#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float h, f, p, d, s;
    int i, j, n;

    printf("Enter the value of n (number of terms you want to enter): ");
    scanf("%d", &n);

    float x[n], y[n], diffTable[n][n];

    printf("Enter the elements of x\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    printf("Enter the elements of y\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }

    h = x[1] - x[0];

    printf("Please enter the value of x for which you want to print y: ");
    scanf("%f", &f);

    // Generate the difference table
    for (i = 0; i < n; i++)
    {
        diffTable[i][0] = y[i];
    }

    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            diffTable[i][j] = diffTable[i + 1][j - 1] - diffTable[i][j - 1];
        }
    }

    p = 1;
    d = y[0];
    s = (f - x[0]) / h;

    for (i = 1; i < n; i++)
    {
        p = p * (s - i + 1) / i;
        d = d + p * diffTable[0][i];
    }
    // Print the difference table
    printf("\nDifference Table:\n");
    for (i = 0; i < n; i++)
    {
        printf("%0.4f\t", x[i]);
        for (j = 0; j < n - i; j++)
        {
            printf("%0.4f\t", diffTable[i][j]);
        }
        printf("\n");
    }
    printf("For the value of x(%f), the value of y is %0.4f\n", f, d);
}