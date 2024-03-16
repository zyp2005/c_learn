/************************************************************************/
/* 编写一个函数，把double类型数组中的数据倒序排列，并在一个简单的程序中 */
/* 测试该函数。                                                         */
/************************************************************************/
#include <stdatomic.h>
#include <stdio.h>
void show_ar(const double ar[], int n);
void sort_ar(double ar[], int n);
int main(void)
{
    double test[10] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    
    show_ar(test, 10);
    sort_ar(test, 10);
    show_ar(test, 10);

    return 0;
}


void show_ar(const double ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%g ", ar[i]);
    printf("\n");
}

void sort_ar(double ar[], int n)
{
    double ar1[n];
    int i;

    for (i = 0; i < n; i++)
        ar1[i] = ar[n - 1 - i];
    for (i = 0; i < n; i++)
        ar[i] = ar1[i];
}
