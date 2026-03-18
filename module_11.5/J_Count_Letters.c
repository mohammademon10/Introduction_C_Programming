#include <stdio.h>
#include <string.h>
int main(void)
{
   char S[10000000];
   scanf("%s",&S);
   int arr[26]={0};
   for(int i=0;i<strlen(S);i++)
   {
int value=S[i]-97;
arr[value]++;

   }
   for(int  i=0;i<26;i++)
   {
    if(arr[i] != 0)
    {
    printf("%c : %d\n",i+97,arr[i]);
    }
   }

    return 0;
}