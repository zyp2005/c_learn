// 设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查找第2个函数形
// 参指定的字符首次出现的位置。如果成功，该函数返指向该字符的指针，如果在字符串中
// 未找到指定字符，则返回空指针（该函数的功能与strchr()函数相同）。在一个完整的
// 程序中测试该函数，使用一个循环给函数提供输入值。
#include <stdio.h>
char * findchr(char * str, char word);
int main(void)
{
    char test[] = "abcdefghijklmnopqrst";
    printf("%s %c %c\n", test, *findchr(test, 'c'), *findchr(test, 'c'));
    printf("%s %c %c\n", test, *findchr(test, 's'), *(findchr(test, 's')+1));

    return 0;
}

char * findchr(char * str, char word)
{
    while (*str != '\0' && *str != word)
        str++;
    if (*str == '\0')
        return NULL;
    else
        return str;
}
