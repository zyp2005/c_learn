/****************************************************************/
/* 编写一个程序，在遇到EOF之前，把输入作为字符流读取。该        */
/* 程序要报告平均每个单词的字母数。不要把空白统计为单词的字母。 */
/* 实际上，标点符号也不应该统计，但是现在暂时不同考虑这么多（如 */
/* 果你比较在意这点，考虑使用ctype.h系列中的ispunct()函         */
/* 数）。                                                       */
/****************************************************************/

/*
  任务: 统计单词, 字符数, 不标点符号和空白数
  统计单词: 一个单词 字母前是空格的字符体
  统计字符: 在单词中递增
  不统计标点符号和空白: if语句
*/

#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int wordCount, charCount;
    char ch, prev;
    wordCount = charCount = 0;
    prev = '\n';

    while ((ch = getchar()) != EOF)
    {
        if (isspace(prev) && isalnum(ch))
            wordCount++;
        if (isalnum(ch))
            charCount++;
        prev = ch;
    }

    printf("There are %d word and %d char.\n", wordCount, charCount);
    printf("And per word has %.2f chars.\n",
           (double)charCount / (double)wordCount);

    return 0;
}
