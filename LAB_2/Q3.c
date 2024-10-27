//Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int main(){
    int a;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&a);
    if (a>0){
        printf("YOUR NUMBER IS POSITIVE");
    }else if (a < 0){
        printf("YOUR NUMBER IS NEGATIVE");
    } else {
        printf("YOUR NUMBER IS 0");
    }
}
