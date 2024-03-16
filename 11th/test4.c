/* 设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中 */
/* 的其余字符。该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有 */
/* 空白、制表符或换行符的字符序列。 */
/* 设计并测试一个函数，它类似编程练习3的描述，只不过它接受第2个参数指明可 */
/* 读取的最大字符数。 */
#include <ctype.h>
#include <stdio.h>
#define MAX 8
char * getWords(char * str, int n);
int main(void)
{
    char test[MAX];

    getWords(test, MAX);
    puts(test);

    return 0;
}

char * getWords(char * str, int n)
{
    int count = 0;
    char ch;
    char * start;

    start = str;
    ch    = getchar();
    while (ch != EOF && isspace(ch))
        ch = getchar();
    if (ch == EOF)
        return NULL;
    else
    {
        count++;
        *str++ = ch;
    }
    ch = getchar();
    while (ch != EOF && !isspace(ch) && count < n-1)
    {
        *str++ = ch;
        count++;
        ch = getchar();
    }
    *str = '\0';
    if (ch == EOF)
        return NULL;
    else
    {
        while (getchar() != '\n')
            continue;
        return start;
    }
}
