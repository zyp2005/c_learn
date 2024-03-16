#include <stdio.h>
int main(void)
{
    char word;
    int i, j;

    for (i = 1, word = 'A'; i <= 6; i++)
    {
        for (j = 1; j <= i; j++, word++)
            printf("%c", word);
        printf("\n");
    }

    return 0;
}
