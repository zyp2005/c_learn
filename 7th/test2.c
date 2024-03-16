#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;
    
    printf("请输入字符:(遇到#停止)");
    while ((ch = getchar()) != '#')
    {
        printf("%c-%d ", ch,ch);
        count++;
        if (count % 8 == 0)
            printf("\n");
    }
    printf("bye\n");

    return 0;
}
