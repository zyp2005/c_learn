/*************************************************************************/
/* 编写一个函数，返回存储在int类型数组中的最大值，并在一个简单的程序中测 */
/* 试该函数。                                                            */
/*************************************************************************/
#include <stdio.h>
int point_max(int ar[], int n);
int main(void)
{
    int test[12] = {2, 45, 46, 734, 234, 45, 765, 345, 2345, 234, 234, 47};
    int max;
    max = point_max(test, 12);
    printf("%d\n", max);

    return 0;
}

int point_max(int ar[], int n)
{
    int max, i;

    for (max = ar[0], i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }

    return max;
}
