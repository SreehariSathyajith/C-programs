// Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("ENTER ANGLE 1 : ");
    scanf("%d",&a);
    printf("ENTER ANGLE 2 : ");
    scanf("%d",&b);
    printf("ENTER ANGLE 3 : ");
    scanf("%d",&c);
    d = a + b + c;
    if (d == 180){
        printf("TRIANGLE IS VALID");
    } else {
        printf("TRIANGLE IS NOT VALID");
    }
    
}