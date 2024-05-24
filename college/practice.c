#include <stdio.h>
#include <math.h>

int main()
{
    float a[100][100], x, u1, u,y;
    int i, j, n, fact;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    printf("Enter Values of X\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i][0]);
    }
    printf("Enter the values of Y\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i][1]);
    }
    printf("Enter the value for x you want y\n");
    scanf("%f",&x);

    //find the difference table
    for(j=2;j<n+1;j++){
        for(i=0;i<n-j+1;i++){
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }
    //print diff table:
    printf("The diff table is as follows:\n");
    for(i=0;i<n;i++){
        for(j=0;j<=n-i;j++){
            printf("%f",a[i][j]);
        }
        printf("\n");
    }
    //find u
    u=(x-a[0][0])/(a[1][0]-a[0][0]);
    //initial y,u1,fact
    y=a[0][1];
    u1=u;
    fact=1;
    for(int i=2;i<=n;i++){
        y=y+(u1*a[0][i])/fact;
        fact*=i;
        u1*=u-(i-1);
    }
    printf("\n\nValue at X=%g is = %f",x,y);
}