#include <stdio.h>
#include <string.h>//aie file use kora lagbe
int main(void)
{
    char a[20];
    fgets(a,20,stdin);//scanf er poriborte eta use korle space soho print kora jabbe 
    printf("%s\n",a);
    return 0;
}