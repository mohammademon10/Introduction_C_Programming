#include <stdio.h>
#include<string.h>
int main() 
{
    char S[100001];
    scanf("%s", S);

    int consonantCount = 0;

    for (int i = 0; i<strlen(S); i++)

    {
         
        if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u') 
        {
            consonantCount++;
        }
    }

    printf("%d\n",consonantCount);

    return 0;
}
