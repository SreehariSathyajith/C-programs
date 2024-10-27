//Write a C program to find maximum between two numbers.
#include <stdio.h>
int main(){
    int a,b;
    a = printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    b = printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
    if (a>b) {
        printf("%d is greater than %d",a,b);
    }else{
        printf("%d is greater than %d",b,a);
    }

  
}