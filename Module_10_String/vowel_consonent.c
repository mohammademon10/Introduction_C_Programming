#include <stdio.h>
#include <string.h>
int main()
{
    int vowel = 0, consonant = 0;
    char str[100];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowel++;
        else
            consonant++;
    }
    printf("%d %d", vowel, consonant);
    return 0;
}