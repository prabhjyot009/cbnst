#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
    return 1/(1+(x*x));
}
int main(){
    int n;
    float a,b;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    printf("Enter a:\n");
    scanf("%f",&a);
    printf("Enter b:\n");
    scanf("%f",&b);
    float x[n+1],y[n+1],h;
    h=(b-a)/n;
    for (int i = 0; i <=n; i++)
    {
        x[i]=a+i*h;
        printf("x%d = %f\n",i,x[i]);
    }
    for (int i = 0; i <=n; i++)
    {
        y[i]=f(x[i]);
        printf("y%d = %f\n",i,y[i]);
    }
    float even=0,odd=0;
    for (int i = 1; i < n; i++)
    {
        if(i%2==0){
            even+=y[i];
        }
        else{
        odd+=y[i];
        }
    }
    float result=(h/3)*(y[0]+y[n]+4*odd+2*even);

    printf("Result: %f",result);

    return 0;
}