#include <stdio.h>

int main()
{
    char name[99], NIS[9];
    int  age;

    scanf("%[^\n]", name);
    scanf("%s %d", NIS, &age);

    printf("Name: %s\n", name);
    printf("NIS: %s\n", NIS);
    printf("Age: %d\n", age);

    return 0; 
}