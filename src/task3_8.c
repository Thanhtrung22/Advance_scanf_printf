#include <stdio.h>

int main()
{
    char str[101] = "";
    scanf("%[ 8a-z0-4@.]", str);
    printf("%s", str);
    return 0;
}