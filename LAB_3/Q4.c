#include <stdio.h>
int main(){
    int a;
    printf("ENTER YOUR AGE :");
    scanf("%d",&a);
    if (a>18){
        printf("YOU ARE ELIGIBLE TO VOTE");
    } else {
        printf("YOU ARE NOT ELIGIBLE TO VOTE");
    }
}