//设计一个程序，统计在读到文件结尾之前读取的字符数。
#include <stdio.h>
int main(void)
{
    long int num_word = 0;
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch != '\n' && ch != ' ')
            num_word++;
        else
            continue;
    }
    printf("%ld words", num_word);

    return 0;
}
