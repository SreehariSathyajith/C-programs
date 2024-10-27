// Write a C program to find all roots of a quadratic equation.
#include <stdio.h>
#include <math.h>
int main(){
    double a , b , c , d , e ,f;
    printf("ENTER TERMS OF QUADRATIC EQUATION : ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    d = pow(b,2) - 4*a*c;
    if (d>0){
        e = (-b + pow(d,0.5))/2*a;
        f = (-b - pow(d,0.5))/2*a;
        printf("ROOTS ARE %lf & %lf",e,f);
    }else if (d == 0 ){
        e = -b / 2*a;
        f = -b / 2*a;
        printf("ROOTS ARE %lf & %lf",e,f);
    }else{
        printf("ROOTS ARE IMAGINARY");
    }
}