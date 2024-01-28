/* 使用嵌套循环，按下面的格式打印字母： */
/* F */
/* FE */
/* FED */
/* FEDC  */
/* FEDCB */
/* FEDCBA */
#include <stdio.h>
int main(void)
{
    char i, j;

    for(i=1; i<=6; i++)
    {
        for (j = 'F'; j > 'F' - i; j--)
            printf("%c", j);
        printf("\n"); 
    }

    return 0;
}
