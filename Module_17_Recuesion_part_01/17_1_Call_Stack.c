#include <stdio.h>
void world()
{
    printf("World\n");
    
}

void hello()
{
    printf("hello\n");
    world();
}

int main()
{
    hello();

    printf("End\n");
    
    return 0;
}