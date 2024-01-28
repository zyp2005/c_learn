// 设计一个函数chline(ch, i, j)，打印指定的字符i行j列。在
// 一个简单的驱动程序中测试该函数。
#include <stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    int i, j;
    char ch;
    
    printf("Please enter the ch, i and j");
    scanf("%c %d %d", &ch, &i, &j);
    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    int i_f, j_f;

    for (i_f = 1; i_f <= i; i_f++)
    {
        for (j_f = 1; j_f <= j; j_f++)
            printf("%c", ch);
        printf("\n");
    }
}
