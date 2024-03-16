/***********************************************************************/
/* 设计并测试一个函数，从输入中获取n个字符（包括空白、制表符、换行符） */
/* ，把结果存储在一个数组里，它的地址被传递作为一个参数。              */
/***********************************************************************/
#include <stdio.h>
#define LEN 10
char * getnchar(char * str, int n);
int main(void)
{
    char input[LEN];
    char * check;

    check = getnchar(input, LEN - 1);
    if (check == NULL)
        puts("Input failed.");
    else
        puts(input);
    puts("Done.\n");

    return 0;
}
char * getnchar(char * str, int n)
{
    int i;
    int ch;
    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if (ch != EOF)
            str[i] = ch;
        else
            break;
    }
    if (ch == EOF)
        return NULL;
    else
    {
        str[i] = '\0';
        return str;
    }
}
