#include <stdio.h>
#include <math.h>

int main(){

float a, b, c, d, x1, x2;

printf("Please enter three values for calculation(a,b,c) : ");
scanf("%f%f%f", &a, &b, &c);

d = (b*b)- 4*a*c;

if(d > 0){
    x1 = -b + sqrt(d) / 2*a;
    x1 = -b - sqrt(d) / 2*a;
    printf("These are your results- %f %f", x1, x2);
}
else if( d == 0){
    x1 = -b/2*a;
    printf("This is your result of Quadratic equation- %f",x1);
}
else printf("Please enter right values!");

return 0;
}
