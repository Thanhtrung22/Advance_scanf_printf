#include <stdio.h>

int main()
{
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    printf("%.*lf", n, x);
    return 0;
}