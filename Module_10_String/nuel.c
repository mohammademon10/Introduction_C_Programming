#include <stdio.h>
int main(void)
{
    char greating[]="hello world!";
    
    greating[6] = '\0';//nuel

    printf("%s",greating);
    return 0;
}