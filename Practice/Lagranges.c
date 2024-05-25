#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    float X[n],y[n],x,sum=0,term;
    int i,j;
    printf("Enter Values of X\n");
    for(i=0;i<n;i++){
        scanf("%f",&X[i]);
    }
    printf("Enter Values of Y\n");
    for(i=0;i<n;i++){
        scanf("%f",&y[i]);
    }
    printf("Enter the value for X you want y\n");
    scanf("%f",&x);
    //formula
    for(i=0;i<n;i++){
        term=1;
        for(j=0;j<n;j++){
            if(i!=j){
                term=term*((x-X[j])/(X[i]-X[j]));
            }
        }
        sum=sum+term*y[i];
    }
    printf("\n Value at X=%g is = %f",x,sum);
}