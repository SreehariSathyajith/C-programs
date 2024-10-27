// Write a C program to check whether a number is even or odd.
#include <stdio.h>
int main(){
    int a;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&a);
    if (a%2 ==0){
        printf("YOUR NUMBER IS EVEN");
    }else{
        printf("YOUR NUMBER IS ODD");
    }
}
