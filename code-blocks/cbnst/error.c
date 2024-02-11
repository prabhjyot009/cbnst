#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float ac,approx,err,abs,rel,per;
    printf("Enter the actual value: ");
    scanf("%f",&ac);
    printf("Enter the approximate value: ");
    scanf("%f",&approx);
    err=ac-approx;
    abs=fabs(err);
    rel=abs/ac;
    per=rel*100;
    printf("Error: %f\nAbsolute Error: %f\nRelative Error: %f\nPercentage Error: %f",err,abs,rel,per);
    getch();
    return 0;
}
