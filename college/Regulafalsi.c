#include<stdio.h>
#include<conio.h>
#include<math.h>
float eqn(float x){
    float f;
    f=x*x*x-3*x+1;
    return(f);
}
float formula(float x1,float x2,float f1,float f2){
    float z;
    z=(((x1*f2)-(x2*f1))/(f2-f1));
    return(z);
}
int main(){
    float x1=1,x2=2,x3,f1,f2,f3;
    int i=1;
    do{
        printf("\nIteration %d : \n",i);
        printf("\nx1=%f \t x2=%f \n",x1,x2);
        f1=eqn(x1);
        printf("Value of f(x1) = %f\n",x1);        
        f2=eqn(x2);
        printf("Value of f(x2) = %f\n",x2);
        x3=formula(x1,x2,f1,f2);
        f3=eqn(x3);
        if(f3>0)
            x2=x3;
        else
            x1=x3;
        i++;
    }
    while(fabs(f3)>0.0005); 
    printf("\nApproximate root is: %f",x3);
    return 0;
}