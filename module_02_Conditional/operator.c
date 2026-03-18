#include<stdio.h>
int main(void){
    int a = 3,b = 20;

    float dvd;

    dvd = b * 1.0/a;//type casting
//dvd = (float)(b)/a;
    printf("%f",dvd);

    return 0;
}
//a + b;
//a - b;
//a * b;
//a / b;-> 5/2 - > float ans = a*1.0/2//type casting
//a % b;