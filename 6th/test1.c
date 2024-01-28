/* 编写一个程序，创建一个包含26个元素的数组，并在其中存储26个小写 */
/* 字母。然后打印数组的所有内容。 */
#include <stdio.h>
int main(void)
{
    char word[26];
    char first;

    for (first = 'a'; first <= 'z'; first++)
        word[first - 'a'] = first;
    for (first = 'a'; first <= 'z'; first++)
        printf("%c", word[first - 'a']);
    return 0;
}
