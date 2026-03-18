#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1000],ch;
    printf("Enter a string : ");
    gets(s);
    int i,vowel,consonant,word,digit,other;
    i=vowel=consonant=word=digit=other=0;

    while((ch=s[i]) != '\0')
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            vowel++;
        }
        else if((ch>='A' && ch<='Z' ) || (ch>='a' && ch<='z') )
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            word++;
        }
        else 
        {
            other++;
        }

        i++;
    }
    word++;

    printf("Number of Vowel = %d\n",vowel);
     printf("Number of Consonant = %d\n",consonant);
      printf("Number of digit = %d\n",digit);
       printf("Number of Word = %d\n",word);
        printf("Number of Other = %d\n",other);

    return 0;
}