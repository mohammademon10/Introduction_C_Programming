#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[20];
    gets(a);//scanf er poriborte eta use korle space soho print kora jabbe 
    printf("%s\n",a);
    return 0;
}