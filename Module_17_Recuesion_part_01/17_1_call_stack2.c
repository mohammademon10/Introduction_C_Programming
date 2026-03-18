#include <stdio.h>
void world()
{
    printf("World start\n");
     printf("World End\n");
}

void hello()
{
    printf("hello Start\n");
    world();//wait
    printf("hello End\n");
}

int main()
{
    printf("Main start\n");

    hello();//wait

    printf("Main End\n");
    
    return 0;
}