#include <stdio.h>
#include <string.h>
int main(void)
{
    char S[1000000];
    fgets(S,1000000,stdin);// sentence input so scanf er poriborte fgets nibbo

    for(int i=0; S[i] != '\\'; i++)
    {
     printf("%c",S[i]);
    }
   
    return 0;
}
/*
input
Egyptian collegiate programming\ contest

output
Egyptian collegiate programming
*/