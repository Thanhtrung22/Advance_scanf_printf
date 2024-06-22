#include <stdio.h>

int main() {
    int student_id;
    int year, result;

    scanf("%d", &student_id);

    year = student_id / 10000;

    result = (year * 2) + (year % 100);

    printf("%d\n", year);
    printf("%d\n", result);

    return 0;
}
