#include<stdio.h>
#include<conio.h>
#include<math.h>
double ex(double x){
    double f;
    f = x*x*x-4*x-9;
    return(f);
}
void find_intervals(double *x1, double *x2) {
    int i;
    double f1, f2;
    for(i=0;i<=10;i++){
        f1=ex(i);
        f2=ex(i+1);
        if((f1<0 && f2>0) || (f1>0 && f2<0)){
            printf("intervals are:%d\t%d\n",i,i+1);
            *x1 = i;
            *x2 = i+1;
        }
    }
}
void bisection_method(double x1, double x2, float range) {
    double z,x3;
    int it=1;
    do{
        printf("iteration %d\t", it);
        printf("x1=%f \t x2=%f \t", x1, x2);
        x3 = (x1 + x2) / 2;
        printf("x3=%f", x3);
        z = ex(x3);
        printf("\n");
        if(z==0.0)
            break;
        else if(z*ex(x1)<0)
            x2=x3;
        else
            x1=x3;
        it++; 
    } while (fabs(x1 - x2) >= range);
}
int main()
{
    double x1, x2;
    float range=0.000001;
    find_intervals(&x1, &x2);
    bisection_method(x1, x2, range);
    return 0;
}