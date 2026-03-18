#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) 
{
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1]) 
        {
            return 0;
        }
    }
    return 1;                                 
}

int main()
 {
    char S[1001];
   gets(S);
    int result = is_palindrome(S);
    if (result == 1) 
    {
        printf("Palindrome\n");
    } 
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}

//palindrome code

#include <stdio.h>
#include <string.h>

int main()
 {
    char S1[1001];
    gets(S1);
     char S2[1001];
    strcpy(S2,S1);
    strrev(S2);
    int result = strcmp(S1,S2);



    if (result == 0 ) 
    {
        printf("Palindrome\n");
    } 
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
