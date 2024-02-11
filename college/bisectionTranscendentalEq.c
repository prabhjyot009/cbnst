#include <stdio.h>
#include <conio.h>
#include <math.h>
double eq(double x)
{
    double f;
    f =cos(x)- x* exp(x);
    return (f);
}
int main()
{
    float x1 = 0, x2 = 1;
    double z, x3;
    float range = 0.001;
    int i = 1;
    printf("\nBisection method\n");
    do
    {
        printf("iteration %d\t", i);
        printf("x1=%f \t x2=%f \t", x1, x2);
        x3 = (x1 + x2) / 2;
        printf("x3=%f", x3);
        z = eq(x3);
        printf("\n");
        if(z==0.0)
            break;
        else if(z*eq(x1)<0)
            x2=x3;
        else
            x1=x3;
        i++;        
    } while (fabs(x1 - x2) >= range);

    return 0;
}