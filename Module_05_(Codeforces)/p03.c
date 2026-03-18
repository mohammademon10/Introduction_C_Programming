#include <stdio.h>

int main() {
    char X;
    
    // Input
    scanf("%c", &X);

    if(X >= 'a' && X <= 'z')
     {
        //upeercase
         printf("%c\n", X - 32);
    }
     else if(X >= 'A' && X <= 'Z')
    {
        // lowercase
        printf("%c\n", X + 32);
    }
    
    return 0;
}
