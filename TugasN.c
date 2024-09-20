#include <stdio.h>

int main()
{
    char name1[100], name2[100];
    float height1, height2;
    int age1, age2; 

    scanf("%s %f %d %s %f %d", name1, &height1, &age1, name2, &height2, &age2);

    printf("Name 1: %s\n", name1);
    printf("Height 1: %.2f\n", height1);
    printf("Age 1: %i\n", age1);
    printf("Name 2: %s\n", name2);
    printf("Height 2: %.2f\n", height2);
    printf("Age 2: %i\n", age2);

    return 0;
}

