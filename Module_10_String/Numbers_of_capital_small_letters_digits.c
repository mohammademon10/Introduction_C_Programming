#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1000];
    printf("Enter a string : ");
    gets(s);
    int i,capital,small,digit;
    i=capital=small=digit=0;

    while((s[i]) != '\0')
    {
        if(s[i]>='A' && s[i]<='Z')//ascii value 95-90
        {
            capital++;
        }
        else if (s[i]>='a' && s[i]<='z') //ascii value 97-122
        {
            small++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            digit++;
        }
        

        i++;
    }


    printf("Number of Capital Letters = %d\n",capital);
     printf("Number of small Lettters = %d\n",small);
      printf("Number of digits = %d\n",digit);
       

    return 0;
}