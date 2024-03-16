// strncpy(s1, s2, n)函数把s2中的n个字符拷贝至s1中，截断s2，或者有必要
// 的话在末尾添加空字符。如果s2的长度是n或多于n，目标字符串不能以空字符结尾。该函
// 数返回s1。自己编写一个这样的函数，名为mystrncpy()。在一个完整的程序中测试该
// 函数，使用一个循环给函数提供输入值
#include <stdio.h>
char * mystrncpy(char * s1, char * s2, int n);
int main(void)
{
    char test1[15] = "aielijoiji";
    char test2[]   = "hhhkjijooadslkfjaksldfjlkjsdalkfj";
    printf("%s\n%s\n%s\n", test1, test2, mystrncpy(test1, test2,10));
}

char * mystrncpy(char * s1, char * s2, int n)
{
    int i;
    char * new;
    new = s1;

    while (*s1 != '\0')
        s1++;
    for (i = 0; i < n; i++)
    {
        if (*s2 != '\0')
        {
            *s1 = *s2;
            s1++;
            s2++;
        }
        else
        {
            *s1 = *s2;
            break;
        }
    }

    return new;
}
