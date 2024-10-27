//Write a C program to find maximum between three numbers.
#include <stdio.h>
int main(){
    int a, b, c;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER:");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("%d is the maximum number between all three",a);
    } else if (b>a && b>c) {
        printf("%d is the maximum number between all three",b);
    }else {
        printf("%d is the maximum number between all three",c);
    }
}