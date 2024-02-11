#include <stdio.h>
#include <conio.h>
#include <math.h>
float f(float x)
{
    return (x * x * x - 4 * x - 9);
}
int main()
{
    int i;
    float f1, f2;
    for (i = 0; i <= 10; i++)
    {
        f1 = f(i);
        f2 = f(i + 1);
        if ((f1 < 0 && f2 > 0) || (f2 < 0 && f1 > 0))
        {
            printf("\nThe intervals for the given equation is\n%d\n%d\n",i,i+1);
        }
    }
    return 0;
}