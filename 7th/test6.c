#include <stdio.h>
int main(void)
{
    char prev, now;
    int ei_count;
    prev = '0';
    ei_count = 0;
    
    printf("输入英文句子,统计ei出现的次数(#停止):");
    while ((now = getchar()) != '#')
    {
        if (prev == 'e' && now == 'i')
            ei_count++;
        prev = now;
    }
    printf("ei出现了%d次数\n", ei_count);

    return 0;
}
