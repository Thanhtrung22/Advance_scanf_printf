#include <stdio.h>

int main()
{
    char str[215];
    scanf("%[^0-9]", str);
    printf("%s", str);
}