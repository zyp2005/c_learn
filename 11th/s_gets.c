// s_gets.c --  重写s_gets()函数
#include <stdio.h>
#include <string.h>
char * s_gets(char ar[], int n);

char * s_gets(char ar[], int n)
{
    char * ret_val;
    char * next_line;

    ret_val = fgets(ar, n, stdin);

    if ((next_line = strchr(ar, '\n')))
        *next_line = '\0';
    else
        while (getchar() != '\n')
            continue;

    return ret_val;
}
