#include<stdio.h>
#include<conio.h>
#include<math.h>

double ex(double x){
    double f;
    f=x*x*x-4*x-9;
    return(f);
}
int main()
{
    double i;
    double f1,f2;
    for(i=0;i<=10;i++){
        f1=ex(i);
        f2=ex(i+1);
        if((f1<0 && f2>0) || (f1>0 && f2<0)){
            printf("intervals are:%f\t%f",i,i+1);
        }
    }
    double x1=2,x2=3;
    float range=0.000001;
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
return 0;
}