// strlen.c -- 模仿strlen()函数
#include <stdio.h>
int strlen1(const char ar[]);

int main(void)
{
    char test[] = "This is a test.";
    int number;

    number = strlen1(test);
    puts(test);
    printf("There are %d words", number);

    return 0;
}

int strlen1(const char ar[])
{
    int i;
    int count;
    for (i = 0, count = 0; ar[i] != '\0'; i++)
        count++;

    return count;
}
