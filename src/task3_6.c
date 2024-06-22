#include <stdio.h>

int main()
{
    char str[101];
    scanf("Full Name: %[^\n]", str);
    printf("%s", str);
}