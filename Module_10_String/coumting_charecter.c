#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    int arr[26]={0};
  
    for (int i = 0; i < strlen(str); i++)
    {
        int value = str[i] - 'a';
        arr[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
            printf("%c occours - %d times\n", i + 97, arr[i]);
    }
    return 0;
}