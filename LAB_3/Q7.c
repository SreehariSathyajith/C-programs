#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int points = 0;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        points = 5;  
    }
    else if (ch >= '0' && ch <= '9') {
        points = 10;  
    }
    else {
        points = 0;  
    }
    printf("Points scored: %d\n", points);

    return 0;
}