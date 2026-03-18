#include <stdio.h>
int main(void)
{
    int arr[] = {10, 11, -1, 56, 67, 5, 4};
    int *ptr, *qtr;
    ptr = arr;
    printf("%d\n", *ptr);
    printf("%d %d %d\n", (*ptr)++, *ptr++, *++ptr);
    qtr = ptr + 3;
    printf("%d\n", *qtr - 3);
    printf("%d\n", *--ptr + 5);
    printf("%d\n", *ptr + *qtr);
    return 0;
}