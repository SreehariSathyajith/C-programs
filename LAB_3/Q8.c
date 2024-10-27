#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isalpha(ch)) {
        if (islower(ch)) {
            printf("You entered a lowercase letter: %c\n", ch);
        }
        else if (isupper(ch)) {
            printf("You entered an uppercase letter: %c\n", ch);
        }
    } else {
        printf("You did not enter a letter.\n");
    }

    return 0;
}