// Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int main(){
    int a;
    printf("ENTER THE YEAR:");
    scanf("%d",&a);
    if (a%4==0){
        printf("%d is a leap year",a);
    }else{
        printf("%d is a not a leap year",a);
    }

}