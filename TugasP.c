#include <stdio.h>

int main()
{
    char name[100];

    scanf("%[A-z]", name);

    getchar();

    printf("%s-san\n", name);

    return 0;
}

