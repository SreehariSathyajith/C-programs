//Write a C program to input month number and print number of days in that month
#include <stdio.h>
int main(){
    int a;
    printf("ENTER MONTH NUMBER :");
    scanf("%d",&a);
    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12){
        printf("THIS MONTH HAS 31 DAYS");
    } else if (a == 2){
        printf("THIS MONTH HAS 28 DAYS");
    } else {
        printf("THIS MONTH HAS 30 DAYS");
    }
}