

#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[10001];
    scanf("%s",&s);
    int cnt[26]={0};//problem
    for(int i=0;i<strlen(s);i++)
    {
      int value=s[i]-97;
      cnt[value]++;//problem
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
        {
            printf("%c - %d\n",i+97,cnt[i]);
        }
    }
    return 0;
}

/*

input:

thefoxisbrave

Sample Output: 

a - 1
b - 1
e - 2
f - 1
h - 1
i - 1
o - 1
r - 1
s - 1
t - 1
v - 1
x - 1

*/