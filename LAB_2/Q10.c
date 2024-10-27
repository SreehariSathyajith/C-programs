//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>
int main(){
    char a;
    printf("ENTER YOUR ALPHABET :");
    scanf("%c",&a);
    if (a>='a' && a<='z'){
        printf("YOUR ALPHABET IS LOWERCASE");
    } else if (a>='A' && a<='Z'){
        printf("YOUR ALPHABET IS UPPERCASE");
    } else{
        printf("THIS IS NOT A ALPHABET");
    }
}