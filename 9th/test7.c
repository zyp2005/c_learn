#include <ctype.h>
#include <stdio.h>

int get_alphabet_position(char c)
{
    if (isalpha(c))
    {
        return tolower(c) - 'a' + 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        int position = get_alphabet_position(ch);
        if (position != -1)
        {
            printf("字符 %c 是字母，字母表中的位置是 %d", ch, position);
        }
        else
        {
            printf("字符 %c 不是字母", ch);
        }
    }
    return 0;
}
