// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int main(){
    int a ;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&a);
    if (a % 5 == 0 && a % 11 == 0){
        printf("YOUR NUMBER IS DIVISIBLE BY BOTH 5 AND 11");
    }else{
        printf("YOUR NUMBER IS NOT DIVISIBLE BY BOTH 5 AND 11");
    }
}
