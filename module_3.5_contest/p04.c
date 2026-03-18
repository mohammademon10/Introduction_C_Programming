//Variables

#include <stdio.h>

int main() {
    int A;
    long long B;
    float C;
    char D;

    // Input
    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%f", &C);
    scanf(" %c", &D); // Note the space before %c to consume the newline character

    // Output
    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);

    return 0;
}
