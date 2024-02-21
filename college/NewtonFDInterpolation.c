#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a[100][100], x, y, u1, u;
    int i, j, n, fact;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter the values for row x:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i][0]);
    }
    printf("Enter the values for the column y:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i][1]);
    }
    printf("Enter the value for x for which you want y:\n");
    scanf("%f", &x);

    // find the difference table:
    for (int j = 2; j < n + 1; j++)
    {
        for (int i = 0; i < n - j + 1; i++)
        {
            a[i][j] = a[i + 1][j - 1] - a[i][j - 1];
        }
    }
    // print the difference table:
    printf("Difference table:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n - i; j++)
            printf("%f\t", a[i][j]);
        printf("\n");
    }
    // find u
    u = (x - a[0][0]) / (a[1][0] - a[0][0]);
    y = a[0][1];
    u1 = u;
    fact = 1;
    for (int i = 2; i <= n; i++)
    {
        y = y + (u1 * a[0][i]) / fact;
        fact = fact * i;
        u1 = u1 * (u - (i - 1));
    }
    printf("\n\nValue of X:%g is = %f", x, y);
    return 0;
}