#include <stdio.h>
#include <conio.h>
#include <math.h>

double eq(double x){
    double f;
    f= x * x * x - 4 * x - 9;
    return (f);
}

int main(){
    float x1=2,x2=3;
    float range=0.000001;
    double z,x3;
    int i=1;
    do{
        printf("Interation:%d\t",i);
        printf("x1=%f\tx2=%f\t",x1,x2);
        x3=(x1+x2)/2;
        printf("x3=%f\t\n",x3);
        z=eq(x3);
        if(z>0)
            x2=x3;
        else
            x1=x3;
    i++;
    }while(fabs(x1-x2)>=range);
    return 0;
}