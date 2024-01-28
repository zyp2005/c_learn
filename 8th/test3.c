// 编写一个程序，在遇到EOF之前，把输入作为字符流读取。该
// 程序要报告输入中的大写字母和小写字母的个数。假设大小写字母数
// 值是连续的。或者使用ctype.h库中合适的分类函数更方便。
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int num_lower, num_upper;
    int ch;

    num_lower = num_upper = 0;
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            num_upper++;
        else if (islower(ch))
            num_lower++;
        else
            continue;
    }
    printf("%d lower, %d upper", num_lower, num_upper);

    return 0;
}
