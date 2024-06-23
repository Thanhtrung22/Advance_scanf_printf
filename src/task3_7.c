#include <stdio.h>

int main()
{
    char input[101];
    char name[31];
    char id[9];
    char class[10];
    char generation[4];
    float gpa;
    scanf("%[^\n]", input);
    sscanf(input, "%[^,],%[^,],%[^,],%[^,],%f", name,id, class, generation, &gpa);
    printf("%s\n", name);
    printf("%s\n", id);
    printf("%s\n", class);
    printf("%s\n", generation);
    printf("%.2f", gpa);


}