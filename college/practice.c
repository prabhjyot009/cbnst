#include<stdio.h>
#include<math.h>

int main(){
    float a[100][100],x,u1,u,y,fact;
    int i,j,n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("Enter x values:\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i][0]);
    }
    printf("Enter y values:\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i][1]);
    }
    printf("Enter the value of x you want y:");
    scanf("%f",&x);
    for(j=2;j<n+1;j++){
        for(i=0;i<n-j+1;i++){
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }
    printf("Difference table");
    for(i=0;i<n;i++){
        for(j=0;j<=n-i;j++){
            printf("%f",a[i][j]);
        }
        printf("\n");
    }
    u=x-a[0][0]/(a[1][0]-a[0][0]);
    u1=u;
    y=a[0][1];
    fact=1;
    for(i=2;i<=n;i++){
        y=y+(u1*a[0][i])/fact;
        fact*=i;
        u1=u1*u-(i-1);
    }
    printf("\n\nValue at X=%g is = %f",x,y);
}