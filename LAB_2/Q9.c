// Write a C program to input any character and check whether it is alphabet, digit or special charecter
#include <stdio.h>
int main(){
    char a ;
    printf("ENTER YOUR CHARECTER:");
    scanf("%c",&a);
    if (a>='a' && a<='z' || a>='A' && a<='Z'){
        printf("YOUR CHARECTER IS A ALPHABET");
    } else if (a>='0' && a<='9'){
        printf("YOUR CHARECTER IS A NUMBER");
    } else {
        printf("YOUR CHARECTER IS A SPECIAL CHARECTER");
    }
}