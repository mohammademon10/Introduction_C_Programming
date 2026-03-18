//for loop

#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100];
    scanf("%s",&a);

    int count = 0;
    for(int i=0;a[i] !='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}

//while loop
#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100];
    scanf("%s",&a);

    int count = 0;
    int i = 0;
    while(a[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}

//strlrn()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100];
    scanf("%s",&a);
    
    int st = strlen(a);

    printf("%d",st);
    return 0;
}