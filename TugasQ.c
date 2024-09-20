#include <stdio.h>

int main()
{
    char name[100];

    scanf("%[A-z]", name);

    printf("Halo %s\n", name);

    return 0;
}

