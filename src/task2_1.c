#include <stdio.h>

int main()
{
    int a = 4;
    float b = 3.14;
    char c = 97;
    unsigned short d = 128;
    char str[] = "Hello World!";

    printf("%d\n", a);
    printf("%.4f\n", b);
    printf("%c\n", c);
    printf("%hu\n", d);
    printf("%s", str);
}