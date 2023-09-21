// 输入一个ASCLL码值,然后打印输入的字符
#include <stdio.h>
int main(void)
{
    int word;

    printf("Write a word in ascll:__\b\b");
    scanf("%d", &word);
    printf("THe word is %c\n", word);

    return 0;
}
