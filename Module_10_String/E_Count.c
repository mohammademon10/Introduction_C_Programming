/*input
351

output
9

*/


#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[1000000];
    scanf("%s",&a);

    int sum=0;
    for(int i=0;i<strlen(a);i++)//condition = length er ag projnthow loop cholbe
    {
        sum= sum+(a[i]-'0');//ascii value calculeation
    }
    printf("%d",sum);

    
    return 0;
}