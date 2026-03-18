#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    strcpy(str2, str1);
    strrev(str1);
    int value = strcmp(str1, str2);
    if (value == 0)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}