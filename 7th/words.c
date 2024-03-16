/*
 输入
 当\n增加一行
 当空格增加一个单词
 当|结束
 */
#include <stdio.h>
int main(void)
{
    int line, word;
    char ch;

    line = word = 0;
    while ((ch = getchar()) != '|')
    {
        if (ch == '\n')
        {
            line++;
            word++;
        }
        else if (ch == ' ')
            word++;
    }

    printf("There are %d words and %d lines\n", word, line);

    return 0;
}
