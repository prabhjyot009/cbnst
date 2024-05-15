#include<stdio.h>
#include<math.h>
float f(float x) {
return 1.0 / (1.0 + x*x);}
float integrate(float (*func)(float), float a, float b, int n) {
float h = (b - a) / n; 
float sum_odd = 0, sum_even = 0;
printf("x0 = %f, y0 = %f\n", a, func(a)); 
for (int i = 1; i < n; i++) {
float x = a + i * h; 
printf("x%d = %f, y%d = %f\n", i, x, i, func(x)); 
if (i % 2 == 0) 
sum_even += func(x);
else 
sum_odd += func(x);}
printf("x%d = %f, y%d = %f\n", n, b, n, func(b));
float result = (h / 3) * (func(a) + 4 * sum_odd + 2 * sum_even + func(b));
return result; }
int main() {
float a, b; 
int n; 
printf("Enter lower limit : ");
scanf("%f", &a);
printf("Enter upper limit : ");
scanf("%f", &b);
printf("Enter the number of subintervals (must be even): ");
scanf("%d", &n);
printf("Integration using Simpson's 1/3 rule:\n");
float result = integrate(f, a, b, n);
printf("Result: %f\n", result);
return 0;}
