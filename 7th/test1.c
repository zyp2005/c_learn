// 编写一个程序读取输入, 读到#字符停止,
// 然后报告读取的空格数,换行数和其他字符的数量
#include <stdio.h>
int main(void)
{
    int space_count, line_count, other_count;
    space_count = 0;
    line_count  = 0;
    other_count = 0;
    char ch;

    printf("请输入文本(输入#结束): ");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space_count++;
        else if (ch == '\n')
            line_count++;
        else
            other_count++;
    }
    printf("space = %d\n line = %d\n other = %d\n", space_count, line_count, other_count);

    return 0;
}

/*

循环 #停止
    如果 空格 空格加一
    如果 换行换行加一
    否则 其他加一

 */

