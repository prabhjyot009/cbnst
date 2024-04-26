#include<stdio.h>
#include<conio.h>
#include<math.h>
float eq(float x){
    float f=(x*x*x)-(3*x)+1;
    return(f);
}
void find_intervals(float *x1,float *x2){
    int it;
    float f1,f2;
    for(it=0;it<10;it++){
        f1=eq(it);
        f2=eq(it+1);
        if((f1<0&&f2>0)||(f1>0&&f2<0)){
            *x1=it;
            *x2=it+1;
        }
    }
}
int main(){
    float x1,x2,x3,f3;
    find_intervals(&x1,&x2);
    float range=0.0001;
    int i=1;
    do{
        printf("Iteration:%d\t",i);
        printf("x1:%f\tx2:%f\t",x1,x2);
        x3=(x1+x2)/2;
        printf("x3:%f\n",x3);
        f3=eq(x3);
        if(f3>0){
            x2=x3;
        }
        else{
            x1=x3;
        }
        i++;
    }while(fabs(x1-x2)>=range);
    return 0;
}