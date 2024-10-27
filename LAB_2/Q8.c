//. Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
int main(){
    char a;
    printf("ENTER YOUR APHABET:");
    scanf("%c",&a);
    if (a == 'a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'i' || a == 'o' || a == 'u'){
        printf("YOUR ALPHABET IS A VOWEL");
    } else {
        printf("YOUR ALPHABET IS A CONSONANT");
    }
}