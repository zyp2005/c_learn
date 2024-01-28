// 编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型
// 的格式打印字母：
// 1234A
// 123ABA
// 12ABCBA
//  ABCDCBA
// ABCDEDCBA
#include <stdio.h>
int main(void)
{
    int i, j;
    char time;

    while (scanf("%c", &time) == 1)
    {
        for (i = 1; i <= time - 64; i++)
        {
            for (j = 1; j <= time - 64 - i; j++)
                printf(" ");
            for (j = 1; j <= i; j++)
                printf("%c", 'A' + j - 1);
            for (j = 1; j <= i - 1; j++)
                printf("%c", 'A' + i - 1 - j);
            printf("\n");
        }
    }
    return 0;
}
