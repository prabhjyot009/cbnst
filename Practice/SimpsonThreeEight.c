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
    float three=0,two=0;
    for (int i = 1; i < n; i++)
    {
        if(i%3==0){
            three+=y[i];
        }
        else{
        two+=y[i];
        }
    }
    float result=(3*h/8)*(y[0]+y[n]+3*two+2*three);
    printf("Result: %f",result);

    return 0;
}