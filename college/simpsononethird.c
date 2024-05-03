//simpsonsonethridrule
#include <stdio.h>
#include <conio.h>
#include <math.h>
float eq(float x){
    float f;
    f=(1)/(1+x*x);
    return (f);
}
int main(){
    float a,b,h,sum=0;
    int n,i;
    printf("Enter the value of a,b and n:");
    scanf("%f%f%d",&a,&b,&n);
    h=(b-a)/n;
    sum=eq(a)+eq(b);
    for(i=1;i<n;i++){
        if(i%2==0){
            sum+=2*eq(a+i*h);
        }
        else{
            sum+=4*eq(a+i*h);
        }
    }
    sum=(h/3)*sum;
    printf("Value of integration is:%f",sum);
    return 0;
}