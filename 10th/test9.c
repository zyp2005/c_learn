/********************************************************************************/
/* 编写一个程序，初始化一个double类型的3×5二维数组，使用一个处理变长数 */
/* 组的函数将其拷贝至另一个二维数组中。还要编写一个以变长数组为形参的函数以显示
 */
/* 两个数组的内容。这两个函数应该能处理任意N×M数组（如果编译器不支持变长数组，
 */
/* 就使用传统C函数处理N×5的数组）。 */
/********************************************************************************/
#include <stdio.h>
void copy_arr(int n, int m, const double ar_from[n][m], double ar_to[n][m]);
void show_arr(int n, int m, const double ar[n][m]);
int main(void)
{
    double test[3][5] = {
        {1.3, 2.4,  2.5,  2.5,  3.4},
        {4.5, 4.6,  7.86, 45,   6.8},
        {3.2, 24.7, 12.5, 35.3, 23 }
    };
    double ar_to[3][5];
    
    copy_arr(3, 5, test, ar_to);
    show_arr(3, 5, test);
    show_arr(3, 5, ar_to);

    return 0;
    
}

void copy_arr(int n, int m, const double ar_from[n][m], double ar_to[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            ar_to[i][j] = ar_from[i][j];
}

void show_arr(int n, int m, const double ar[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%5g", ar[i][j]);
        printf("\n");
    }
    printf("\n");
}
