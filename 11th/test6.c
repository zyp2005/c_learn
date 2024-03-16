// 编写一个名为is_within()的函数，接受一个字符和一个指向字符串的指针作为
// 两个函数形参。如果指定字符在字符串中，该函数返回一个非零值（即为真）。否则，返
// 回0（即为假）。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
#include <stdio.h>
#include <string.h>
#define LEN 80
_Bool is_within(const char * str, char c);
char * s_gets(char * st, int n);
int main(void)
{
    char input[LEN];
    char ch;
    int found;
    ;

    printf("Enter a string: ");
    while (s_gets(input, LEN) && input[0] != '\0')
    {
        printf("Enter a character: ");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        found = is_within(input, ch);
        if (found == 0)
            printf("%c not found in string.\n", ch);
        else
            printf("%c found in string %s\n", ch, input);
        printf("Next string: ");
    }
    puts("Done.\n");

    return 0;
}
_Bool is_within(const char * str, char ch)
{
    while (*str != ch && *str != '\0')
        str++;
    return *str; /* = 0 if \0 reached, non-zero otherwise */
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // look for newline
        if (find)                // if the address is not NULL,
            *find = '\0';        // place a null character there
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
