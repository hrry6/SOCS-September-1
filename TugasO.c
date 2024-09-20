#include <stdio.h>

int main()
{
    char word1[20], word2[20], word3[20];

    scanf("%[a-z] %[a-z] %[a-z]", word1, word2, word3);

    printf("%s %s %s\n", word3, word2, word1);
    return 0 ;
}