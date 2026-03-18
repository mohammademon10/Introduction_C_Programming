#include <stdio.h>

int main() {
    char ch;
    char s[100]; // Adjust the size as needed
    char sentence[100]; // Adjust the size as needed

    // Read a character
    scanf("%c", &ch);
    printf("%c\n", ch);

    // Read a string
    scanf("%s", s);
    printf("%s\n", s);

    // Read a sentence
    gets("%[^\n]%*c",&sentence);
    printf("%s\n", sentence);

    return 0;
}