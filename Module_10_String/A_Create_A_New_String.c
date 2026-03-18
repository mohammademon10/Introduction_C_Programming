#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    //input
    char S[1000];
    scanf("%s",&S);
    char T[1000];
    scanf("%s",&T);

    //count length
    int count1=strlen(S);
    int count2=strlen(T);

    //print
    printf("%d %d\n",count1,count2);
    printf("%s %s\n",S,T);
    return 0;
}