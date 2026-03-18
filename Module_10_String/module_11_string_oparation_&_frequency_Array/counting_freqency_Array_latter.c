//type-01
#include <stdio.h>
#include <string.h>
int main(void)
{
   char S[10001];
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
    printf("%c - %d\n",i+97,arr[i]);
    }
   }

    return 0;
}
/*
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

/*type-02:

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
        
        
            printf("%c - %d\n",i+97,cnt[i]);
        
    }
    return 0;
}
input:

bangladesh

output:

a - 2
b - 1
c - 0
d - 1
e - 1
f - 0
g - 1
h - 1
i - 0
j - 0
k - 0
l - 1
m - 0
n - 1
o - 0
p - 0
q - 0
r - 0
s - 1
t - 0
u - 0
v - 0
w - 0
x - 0
y - 0
z - 0

*/

/*
type-03

*/