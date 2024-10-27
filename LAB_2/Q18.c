// Write a C program to calculate profit or loss.
#include <stdio.h>
int main(){
    double a,b,c;
    printf("ENTER COST PRICE:");
    scanf("%lf",&a);
    printf("ENTER SELLING PRICE:");
    scanf("%lf",&b);
    c = 0;
    if (a>b){
        c += a - b;
        printf("LOSS IS $ %lf",c);
    } else {
        c += b - a;
        printf("PROFIT IS $ %lf",c);
    }
}