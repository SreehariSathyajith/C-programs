//  Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
int main(){
    char ch ;
    printf("ENTER YOUR CHARECTER:");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("YOUR CHARECTER IS A ALPHABET");
    } else {
        printf("YOUR CHARECTER IS NOT A ALPHABET");
    }
}