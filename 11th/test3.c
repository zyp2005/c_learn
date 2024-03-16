// 设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中
// 的其余字符。该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有
// 空白、制表符或换行符的字符序列。
#include <ctype.h>
#include <stdio.h>
void get_word(char ar[]);

char * getword(char * str)
{
    int ch;
    char * orig = str;
    // skip over initial whitespace
    while ((ch = getchar()) != EOF && isspace(ch))
        continue;
    if (ch == EOF)
        return NULL;
    else
        *str++ = ch; // first character in word
                     // get rest of word
    while ((ch = getchar()) != EOF && !isspace(ch))
        *str++ = ch;
    *str = '\0';
    if (ch == EOF)
        return NULL;
    else
    {
        while (ch != '\n')
            ch = getchar();
        return orig;
    }
}

void get_word(char ar[])
{
    int i;
    int is_space_after_word; // 0-未遇到字符, 1-在字符中
    char ch;
    i                   = 0;
    is_space_after_word = 0;
    do
    {
        ch = getchar();
        if (isspace(ch))
        {
            if (is_space_after_word)
                break;
            else
                continue;
        }
        else
        {
            ar[i]               = ch;
            is_space_after_word = 1;
            i++;
        }
    } while (1);

    ar[i + 1] = '\0';
}
